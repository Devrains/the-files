#include <iostream>
#include <vector>
#include <algorithm>

#ifndef ODDCOUNTER_H
#define ODDCOUNTER_H

class OddCounter {
public:
	OddCounter() = default;

public:
	__forceinline int GetCount() const 
	{ 
		return m_counter;
	}
	inline void Update(std::vector<int32_t>& vec) 
	{
		std::for_each(vec.begin(), vec.end(), [this](int element) {
			if (element % 2)
				m_counter++;
			});
	}

private:
	int m_counter = 0;
};
#endif // !OddCounter