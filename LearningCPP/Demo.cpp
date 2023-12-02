/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Demo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 21:52:40 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/02 22:00:20 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

enum cow_purpose{
	MEAT,
	MILK,
	HIDE,
	PET
};

class cow{
public:
	string name;
	int age;
	unsigned char purpose;
};

int main()
{
	cow cow1;
	
	cow1.name = "Babe";
	cow1.age = 5;
	cow1.purpose = PET;
	cout << cow1.name << " is a type-" << (int)cow1.purpose << " cow." << endl;
	cout << cow1.name << " is " << cow1.age << " years old." << endl;
	return (0);
}