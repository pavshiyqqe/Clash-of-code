/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_e.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:52:21 by yyaniv            #+#    #+#             */
/*   Updated: 2025/12/16 14:52:21 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string x;
    getline(cin, x);

    int i = 0;
    int c = 1;
    while (x[i])
    {
        if (x[i] =='e' || x[i] == 'E')
            ++c;
        i++;
    }
    cout << c;
}