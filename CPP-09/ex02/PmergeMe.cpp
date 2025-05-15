/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:18:57 by lde-mich          #+#    #+#             */
/*   Updated: 2024/04/16 12:26:51 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(PmergeMe const &obj)
{
	(*this) = obj;
}

PmergeMe::~PmergeMe()
{

}


PmergeMe &PmergeMe::operator=(PmergeMe const &obj)
{
	if (this == &obj)
		return (*this);

	this->vector = obj.vector;
	this->deque = obj.deque;

	return (*this);
}



//CHECK


void PmergeMe::checkDouble(char** argv)
{
	int i = 0;
	
    while (argv[i])
    {
        int j = i + 1;
        while (argv[j])
        {
            if (std::strcmp(argv[i], argv[j]) == 0)
                throw PmergeMe::InvalidInputException();
            j++;
        }
        i++;
    }
}

void PmergeMe::checkArgs(char** argv)
{
	int j = 1;
	int i = 0;

	while(argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			if (!isdigit(argv[j][i]))
				throw PmergeMe::InvalidInputException();
			i++;
		}
		j++;
	}
}


void PmergeMe::loadArgs(char** argv)
{
	int j = 1;

	while (argv[j])
	{
		this->vector.push_back(atoi(argv[j]));
		this->deque.push_back(atoi(argv[j]));
		j++;
	}
}



//UTILS

size_t jacobsthal[] =
{
    3u, 5u, 11u, 21u, 43u, 85u, 171u, 341u, 683u, 1365u,
    2731u, 5461u, 10923u, 21845u, 43691u, 87381u, 174763u, 349525u, 699051u,
    1398101u, 2796203u, 5592405u, 11184811u, 22369621u, 44739243u, 89478485u,
    178956971u, 357913941u, 715827883u, 1431655765u,
    2863311531u, 5726623061u, 11453246123u
};



//VECTOR --------------------------------------------------------------------------------------

int PmergeMe::searchToDoVector(int num, std::vector<int>& arr) const
{
	int start = 0;
    int end = getSizeVector(arr);

    while (start < end)
	{
        int mid = start + (end - start) / 2;
		
        if (num < arr[mid])
            end = mid;
        else if (num > arr[mid])
            start = mid + 1;
        else
            return mid;
    }
	
    return start;
}

void PmergeMe::printVector(std::vector<int> arr)
{
	int i = 0;
	while (i < getSizeVector(arr))
	{
		std::cout << arr[i] << " ";
		i++;
	}
	std::cout << std::endl;

	return ;
}

int PmergeMe::getSizeVector(std::vector<int> arr) const
{
	return (arr.size());
}


std::vector<int> &PmergeMe::getVector()
{
	return (this->vector);
}


//SORT VECTOR

void PmergeMe::firstStepVector(int pairsize)
{
	// static int rr;
	
	if (pairsize > getSizeVector(this->vector))
		return;
	
	if (getSizeVector(this->vector) % pairsize != 0)
    {
		size_t i = getSizeVector(this->vector); 
        while (getSizeVector(this->vector) % pairsize != 0)
        {
            this->restVector.push_back(this->vector[i - 1]);
            this->vector.pop_back();
			i--;
        }
    }
	
	int i = 0;
	while (i < getSizeVector(this->vector))
	{
		if (this->vector[i] < this->vector[i + pairsize / 2])
		{
			std::swap(this->vector[i], this->vector[i + pairsize / 2]);
			
			int j = 1;
			while (j < pairsize / 2)
			{
				std::swap(this->vector[j + i], this->vector[j + i + (pairsize / 2)]);
				j++;
			}
		}
		i += pairsize;
	}

	// std::cout << "Step " << ++rr << " →      ";
	// printVector(getVector());
	firstStepVector(pairsize * 2);

}


void PmergeMe::secondStepVector(int pairsize)
{
    // static int rr;
    if (pairsize < 2)
		return;

	// std::cout << "Vector " << ++rr << " →    ";
    // printVector(getVector());
	
    this->pendVector.push_back(this->vector[pairsize / 2]);
	this->mainVector.push_back(this->vector[pairsize / 2]);

    int i = pairsize / 2 + 1;
    while (i < pairsize)
	{
        this->pendVector.push_back(this->vector[i]);
        i++;
    }

    i = 0;
	this->mainVector.push_back(this->vector[i]);
    while (i < pairsize / 2)
	{
        this->pendVector.push_back(this->vector[i]);
        i++;    
    }


	if (pairsize != getSizeVector(this->vector))
	{
		i = pairsize;
		this->mainVector.push_back(this->vector[i]);
		while (i < pairsize + pairsize / 2)
		{
			this->pendVector.push_back(this->vector[i]);
			i++;    
		}
		// std::cout << "test →        "; 
    	// printVector(this->pendVector);
		// std::cout << "test2 →       "; 
    	// printVector(this->mainVector);
		
		size_t last = 3;
		for (int j = 0; j < 33; j++)
		{
			if (jacobsthal[j] <= last)
				continue;
			
			size_t jacob = jacobsthal[j];
			if (jacob > (size_t)getSizeVector(this->vector) / (pairsize / 2))
				jacob = (size_t)getSizeVector(this->vector) / (pairsize / 2);
			
			while (jacob > last)
			{
				// std::cout << "whilepend →   "; 
				// printVector(this->pendVector);
				// std::cout << "whilemain →   "; 
				// printVector(this->mainVector);
				
				// indice del main della futura coppia
				int index = (jacob - 1) * pairsize / 2;
				
				int ret = (searchToDoVector(this->vector[index], this->mainVector));
				int tmp = ret * pairsize / 2;
				this->mainVector.insert(this->mainVector.begin() + ret, this->vector[index]);
				
				while ((size_t)index < jacob * pairsize / 2)
				{
					// std::cout << index << " - " << this->vector[index] << std::endl;
					// std::cout << "whilepend →   "; 
					// printVector(this->pendVector);
					// std::cout << "whilemain →   "; 
					// printVector(this->mainVector);
					
					this->pendVector.insert(this->pendVector.begin() + tmp++, this->vector[index]);
					index++;

					// std::cout << "while pend →  "; 
					// printVector(this->pendVector);
					// std::cout << "while main →  "; 
					// printVector(this->mainVector);
				}
				jacob--;
			}
			last = jacobsthal[j];
		}
	}
	this->vector = this->pendVector;

	// std::cout << "Pend →        "; 
    // printVector(this->pendVector);
	// std::cout << "Main →        "; 
    // printVector(this->mainVector);

    this->pendVector.clear();
	this->mainVector.clear();
	
    secondStepVector(pairsize / 2);
}


void PmergeMe::insertRestVector()
{
	if (this->vector.empty())
		return ;
	
	int i = 0;
	while (i < getSizeVector(this->restVector))
	{
		int tmp = (searchToDoVector(this->restVector[i], this->vector));
		this->vector.insert(this->vector.begin() + tmp, this->restVector[i]);
		i++;
	}
}


//EXECUTE VECTOR

void PmergeMe::vectorExecute()
{
	clock_t start_time = clock();
	
	std::cout << "Before: "; 
	printVector(getVector());
	
	firstStepVector(2);
	
	secondStepVector(getSizeVector(this->vector));
	insertRestVector();

	std::cout << "After: "; 
    printVector(this->vector);

	clock_t end_time = clock();
	double time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    double duration_microseconds = time  * 1000000;

	std::cout << "Time to process a range of " << getSizeVector(this->vector)<< " elements with std::vector : " << duration_microseconds << " us" << std::endl;
	
}



//DEQUE ------------------------------------------------------------------------------------------

int PmergeMe::searchToDoDeque(int num, std::deque<int>& arr) const
{
	int start = 0;
    int end = getSizeDeque(arr);

    while (start < end)
	{
        int mid = start + (end - start) / 2;
		
        if (num < arr[mid])
            end = mid;
        else if (num > arr[mid])
            start = mid + 1;
        else
            return mid;
    }
	
    return start;
}

void PmergeMe::printDeque(std::deque<int> arr)
{
	int i = 0;
	while (i < getSizeDeque(arr))
	{
		std::cout << arr[i] << " ";
		i++;
	}
	std::cout << std::endl;

	return ;
}

int PmergeMe::getSizeDeque(std::deque<int> arr) const
{
	return (arr.size());
}


std::deque<int> &PmergeMe::getDeque()
{
	return (this->deque);
}


//SORT DEQUE

void PmergeMe::firstStepDeque(int pairsize)
{
	// static int rr;
	
	if (pairsize > getSizeDeque(this->deque))
		return;

	if (getSizeDeque(this->deque) % pairsize != 0)
    {
		size_t i = getSizeDeque(this->deque); 
        while (getSizeDeque(this->deque) % pairsize != 0)
        {
            this->restDeque.push_back(this->deque[i - 1]);
            this->deque.pop_back();
			i--;
        }
    }

	int i = 0;
	while (i < getSizeDeque(this->deque))
	{
		if (this->deque[i] < this->deque[i + pairsize / 2])
		{
			std::swap(this->deque[i], this->deque[i + pairsize / 2]);
			
			int j = 1;
			while (j < pairsize / 2)
			{
				std::swap(this->deque[j + i], this->deque[j + i + (pairsize / 2)]);
				j++;
			}
		}
		i += pairsize;
	}

	// std::cout << "Step " << ++rr << " →      ";
	// printDeque(getDeque());
	firstStepDeque(pairsize * 2);

}


void PmergeMe::secondStepDeque(int pairsize)
{
    // static int rr;
    if (pairsize < 2)
		return;

	// std::cout << "Deque " << ++rr << " →    ";
    // printDeque(getDeque());
	
    this->pendDeque.push_back(this->deque[pairsize / 2]);
	this->mainDeque.push_back(this->deque[pairsize / 2]);

    int i = pairsize / 2 + 1;
    while (i < pairsize)
	{
        this->pendDeque.push_back(this->deque[i]);
        i++;
    }

    i = 0;
	this->mainDeque.push_back(this->deque[i]);
    while (i < pairsize / 2)
	{
        this->pendDeque.push_back(this->deque[i]);
        i++;    
    }


	if (pairsize != getSizeDeque(this->deque))
	{
		i = pairsize;
		this->mainDeque.push_back(this->deque[i]);
		while (i < pairsize + pairsize / 2)
		{
			this->pendDeque.push_back(this->deque[i]);
			i++;    
		}
		// std::cout << "test →        "; 
    	// printDeque(this->pendDeque);
		// std::cout << "test2 →       "; 
    	// printDeque(this->mainDeque);
		
		size_t last = 3;
		for (int j = 0; j < 33; j++)
		{
			if (jacobsthal[j] <= last)
				continue;
			
			size_t jacob = jacobsthal[j];
			if (jacob > (size_t)getSizeDeque(this->deque) / (pairsize / 2))
				jacob = (size_t)getSizeDeque(this->deque) / (pairsize / 2);
			
			while (jacob > last)
			{
				// std::cout << "whilepend →   "; 
				// printDeque(this->pendDeque);
				// std::cout << "whilemain →   "; 
				// printDeque(this->mainDeque);
				
				// indice del main della futura coppia
				int index = (jacob - 1) * pairsize / 2;
				
				int ret = (searchToDoDeque(this->deque[index], this->mainDeque));
				int tmp = ret * pairsize / 2;
				this->mainDeque.insert(this->mainDeque.begin() + ret, this->deque[index]);
				
				while ((size_t)index < jacob * pairsize / 2)
				{
					// std::cout << index << " - " << this->deque[index] << std::endl;
					// std::cout << "whilepend →   "; 
					// printDeque(this->pendDeque);
					// std::cout << "whilemain →   "; 
					// printDeque(this->mainDeque);
					
					this->pendDeque.insert(this->pendDeque.begin() + tmp++, this->deque[index]);
					index++;

					// std::cout << "while pend →  "; 
					// printDeque(this->pendDeque);
					// std::cout << "while main →  "; 
					// printDeque(this->mainDeque);
				}
				jacob--;
			}
			last = jacobsthal[j];
		}
	}
	this->deque = this->pendDeque;

	// std::cout << "Pend →        "; 
    // printDeque(this->pendDeque);
	// std::cout << "Main →        "; 
    // printDeque(this->mainDeque);

    this->pendDeque.clear();
	this->mainDeque.clear();
	
    secondStepDeque(pairsize / 2);
}


void PmergeMe::insertRestDeque()
{
	if (this->deque.empty())
		return ;
	
	int i = 0;
	while (i < getSizeDeque(this->restDeque))
	{
		int tmp = (searchToDoDeque(this->restDeque[i], this->deque));
		this->deque.insert(this->deque.begin() + tmp, this->restDeque[i]);
		i++;
	}
}


//EXECUTE DEQUE

void PmergeMe::dequeExecute()
{
	clock_t start_time = clock();
	
	std::cout << "Before: "; 
	printDeque(getDeque());
	
	firstStepDeque(2);
	
	secondStepDeque(getSizeDeque(this->deque));
	insertRestDeque();

	std::cout << "After: "; 
    printDeque(this->deque);
	
	clock_t end_time = clock();
	double time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    double duration_microseconds = time  * 1000000;

    std::cout << "Time to process a range of " << getSizeDeque(this->deque)<< " elements with std::deque : " << duration_microseconds << " us" << std::endl;
}
