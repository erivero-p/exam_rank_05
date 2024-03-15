/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:29:14 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/15 16:09:48 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string	title;
	public:
		Warlock(std::string nm, std::string tt);
		~Warlock(void);
		const std::string &getName(void) const;
		const std::string &getTitle(void) const;
		void	setTitle(const std::string &title);
		void	introduce(void) const;
} ;