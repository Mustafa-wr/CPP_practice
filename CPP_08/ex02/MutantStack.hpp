/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:54:43 by mradwan           #+#    #+#             */
/*   Updated: 2023/06/24 16:32:53 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>


template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	
	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}
	
	const_iterator begin() const
	{
		return (std::stack<T>::c.begin());
	}

	iterator end()
    {
        return std::stack<T>::c.end();
    }

    const_iterator end() const
    {
        return std::stack<T>::c.end();
    }

};

#endif
