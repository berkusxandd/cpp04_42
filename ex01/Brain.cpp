/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bince < bince@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:53:50 by bince             #+#    #+#             */
/*   Updated: 2024/12/10 19:53:51 by bince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain CONSTRUCTOR called." << std::endl;
    for (int i = 0; i < 100; ++i)
        ideas[i] = "Empty Idea";
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain COPY constructor called." << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain DESTRUCTOR called." << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "Brain ASSIGNMENT operator called." << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = src.ideas[i];
    }
    return *this;
}

std::string Brain::getIdea(int index) const
{
    return (index >= 0 && index < 100) ? ideas[index] : "Invalid index";
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
