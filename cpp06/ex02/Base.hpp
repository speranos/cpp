/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 02:19:54 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/25 02:19:54 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
public:
	virtual ~Base();
	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);

};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif