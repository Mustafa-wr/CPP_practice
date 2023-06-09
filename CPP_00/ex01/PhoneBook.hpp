/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradwan <mradwan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:05:12 by mradwan           #+#    #+#             */
/*   Updated: 2023/04/10 20:53:58 by mradwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>  
#include <iostream>
#include <iomanip> 

class PhoneBook
{
public:
    PhoneBook();
    void addContact();
    void searchContacts();

private:
    Contact m_contacts[8];
    int m_nbContacts;
};

#endif
