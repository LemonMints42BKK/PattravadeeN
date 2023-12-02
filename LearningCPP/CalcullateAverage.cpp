/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CalcullateAverage.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <65420071@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:20:08 by pnopjira          #+#    #+#             */
/*   Updated: 2023/12/02 21:38:40 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdint>

#define LENGTH 5

using namespace std;

int arr[LENGTH] = { 1, 23, 32, 24, 337 };

int main()
{
	int sum = 0;
	float average = 0;

	for (int i = 0; i < LENGTH; i++)
	{
		sum += arr[i];
	}
	average = (float)sum / LENGTH;
	cout << "Average is " << average << endl;
	return (0);
}