/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:52:00 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/11 16:51:11 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "mutantstack.hpp"

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }

int main()
{
    std::cout << "MUTANTSTACK" << std::endl;

    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(99);

    std::cout << "TOP : " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "SIZE : " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while(it != ite){
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);

    std::cout << "\nLIST" << std::endl;


    std::list<int>    list;

    list.push_back(5);
    list.push_back(99);

    std::cout << "TOP = " << list.back() << std::endl;

    list.pop_back();

    std::cout << "Size = " << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);

    //[...]
    list.push_back(0);

    std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();

    ++itlist;
    --itlist;

    while(itlist != itliste){
        std::cout << *itlist << std::endl;
        ++itlist;
    }
    
    std::list<int> s2(list);

    std::cout << "\nMUTANTSTACK reverse" << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    ++rit;
    --rit;

    while(rit != rite){
        std::cout << *rit << std::endl;
        ++rit;
    }

    std::cout << "\nLIST reverse" << std::endl;
    
    std::list<int>::reverse_iterator ritlist = list.rbegin();
    std::list<int>::reverse_iterator ritliste = list.rend();

    ++ritlist;
    --ritlist;

    while(ritlist != ritliste){
        std::cout << *ritlist << std::endl;
        ++ritlist;
    }
}