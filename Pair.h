#pragma once
#include <ostream>

namespace Pair {
	template <typename _Ty1, typename _Ty2>
	class Pair {
		_Ty1 m_first;
		_Ty2 m_second;
	public:
		Pair() {
		}

		Pair(_Ty1 m_first, _Ty2 m_second) : m_first(m_first), m_second(m_second) {
		}

		_Ty1& first() {
			return m_first;
		}

		_Ty2& second() {
			return m_second;
		}

		_Ty1* first_ptr() {
			return &m_first;
		}

		_Ty2* second_ptr() {
			return &m_second;
		}
		
		Pair <_Ty2, _Ty1> getSwapped() {
			return Pair <_Ty2, _Ty1>(m_second, m_first);
		}

		Pair <_Ty1, _Ty2>& operator=(const Pair <_Ty1, _Ty2>& other) {
			if (this != &other) {
				this->m_first = other.m_first;
				this->m_second = other.m_second;
			}
			return *this;
		}

		bool operator==(const Pair <_Ty1, _Ty2>& other) const {
			return this->m_first == other.m_first and this->m_second == other.m_second;
		}

		bool operator!=(const Pair <_Ty1, _Ty2>& other) const {
			return this->m_first != other.m_first or this->m_second != other.m_second;
		}

		bool operator<(const Pair <_Ty1, _Ty2>& other) const {
			return this->m_first < other.m_first and this->m_second < other.m_second;
		}

		bool operator>(const Pair <_Ty1, _Ty2>& other) const {
			return this->m_first > other.m_first and this->m_second > other.m_second;
		}

		friend std::ostream& operator<<(std::ostream& out, Pair <_Ty1, _Ty2>& _pair) {
			out << _pair.first() << " " << _pair.second();
			return out;
		}
	};
}
