// Copyright [2019] <Copyright fanghao>
StrVec::StrVec(StrVec&& s) NOEXCEPT : elements(s.elements), first_free(s.first_free),cap(s.cap)
{
    s.elements = s.first_free = s.cap = nullptr;
}
 
StrVec& StrVec::operator=(StrVec&& rhs) NOEXCEPT
{
    if (this != &rhs) {
        free();
        elements = rhs.elements;
        first_free = rhs.first_free;
        cap = rhs.cap;
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}
