/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   team_compare.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:20:07 by yyaniv            #+#    #+#             */
/*   Updated: 2025/12/17 13:20:07 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


#include <iostream>
using namespace std;

int main() {
    string team1, team2;
    getline(cin, team1);
    getline(cin, team2);
    
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < team1.length(); i++) {
        if (team1[i] == '.') {
            sum1 += (team1[i-1] - '0') + (team1[i+1] - '0') * 0.1 + (team1[i+2] - '0') * 0.01;
        }
    }
    for (int i = 0; i < team2.length(); i++) {
        if (team2[i] == '.') {
            sum2 += (team2[i-1] - '0') + (team2[i+1] - '0') * 0.1 + (team2[i+2] - '0') * 0.01;
        }
    }
    if (sum1 > sum2) cout << "team1";
    else if (sum2 > sum1) cout << "team2";
    else cout << "draw";
    
    return 0;
}