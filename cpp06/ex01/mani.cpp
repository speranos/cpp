/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mani.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <aoueldma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 02:14:51 by aoueldma          #+#    #+#             */
/*   Updated: 2023/05/25 02:16:45 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data = {10, 3};

    uintptr_t serialized = Serializer::serialize(&data);

	Data* deserialized = Serializer::deserialize(serialized);

    std::cout << "Original: " << data.x << ", " << data.y << std::endl;
    std::cout << "Deserialized: " << deserialized->x << ", " << deserialized->y << std::endl;

    return 0;
}