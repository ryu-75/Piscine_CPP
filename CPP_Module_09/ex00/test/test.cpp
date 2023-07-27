#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

int	main(void)
{
    // SET CONTAINERS
    std::cout << "# SET CONTAINER #" << std::endl;
    {
	    std::set<int>	st;

        st.insert(8);
        st.insert(8);
        st.insert(1);
        st.insert(5);
        st.insert(7);
        st.insert(12);
        st.insert(6);
        st.insert(11);

        std::multiset<int>::iterator    it;

        for (it = st.begin(); it != st.end(); it++)
            std::cout << *it << std::endl;
        std::cout << "Initialize values with sorted sequence" << std::endl;
        std::cout << "Setting the same value is not possible" << std::endl;
    }
    // MULTISET CONTAINERS
    std::cout << std::endl;
    std::cout << "# MULTISET CONTAINER #" << std::endl;
    {
        std::multiset<int>	st;

        st.insert(8);
        st.insert(1);
        st.insert(5);
        st.insert(7);
        st.insert(1);
        st.insert(6);
        st.insert(11);

        std::multiset<int>::iterator    it;

        for (it = st.begin(); it != st.end(); it++)
            std::cout << *it << std::endl;
        std::cout << "Initialize values with sorted sequence" << std::endl;
        std::cout << "Multiset can have the same value" << std::endl;
    }
    return (0);
}
