/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   null_odd_even.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:15:56 by yyaniv            #+#    #+#             */
/*   Updated: 2025/12/17 20:15:56 by yyaniv           ###   ########.fr       */
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
    int n;
    cin >> n; cin.ignore();
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 != 0)
            n = 3*n+1;
        else
            n /=2;
        cout << n;
        if (n != 1)
            cout << " ";
    }
}