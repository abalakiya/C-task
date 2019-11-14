// Copyright [2019] <Copyright fanghao>
String& String::operator=(const String& rhs)
{
    auto newstr = alloc_n_copy(rhs.elements, rhs.end);
    free();
    elements = newstr.first;
    end = newstr.second;
    return *this;
}
 
String::String(String&& s) NOEXCEPT : elements(s.elements), end(s.end)
{
    s.elements = s.end = nullptr;
}
 
String& String::operator=(String&& rhs) NOEXCEPT
{
    if (this != &rhs) {
        free();
        elements = rhs.elements;
        end = rhs.end;
        rhs.elements = rhs.end = nullptr;
    }
    return *this;
}
