/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:29:14 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/05 14:16:27 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string	title;
		Warlock(void);
		Warlock(const Warlock &src);
		Warlock &operator=(const Warlock &src);
	public:
		Warlock(std::string nm, std::string tt);
		~Warlock(void);
		const std::string &getName(void) const;
		const std::string &getTitle(void) const;
		void	setTitle(const std::string &title);
		void	introduce(void) const;
} ;