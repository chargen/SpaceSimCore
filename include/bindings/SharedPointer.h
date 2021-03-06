// AUTOMATICALLY MOVED! This file is shadowed!
#pragma once

#include <memory>

using namespace std;

template<typename Type>
class SharedPointer {
public:
	SharedPointer &operator=(const SharedPointer &rhs) {
		ptr = rhs.ptr;
	}

	Type *operator->() {
		return ptr.operator->();
	}
	

	bool operator==(const SharedPointer &rhs) const {
		return ptr.operator==(rhs.ptr);
	}

	bool operator==(SharedPointer &rhs) const {
		return ptr == rhs.ptr;
	}
	
protected:
	shared_ptr<Type> ptr;
};
