/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 22:42:35 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/08 16:04:37 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


	int size = a.size();
	int max_num = size - 1;			//le plus grand nombre dans a
	int max_bits = 0; 				//combien de bits pour max_num 

	while ((max_num >> max_bits) != 0) ++max_bits;
	{
		for (int i = 0 ; i < max_bits ; ++i) //repeter pour max_bits fois
		{
   			 for(int j = 0 ; j < size ; ++j)
    		{
        		int num = a.top(); 		//nombre top de a
        		if ((num >> i)&1 == 1)	//si le (i + 1)-eme bit vaut 1, laisse ds a
        			ra();
				else
					pb();				//sinon pb
   			 }
    			while (!b.empty())
					pa();				//tant que b n'est pas vide, faire pa
    	}
	}
}
