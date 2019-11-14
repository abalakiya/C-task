// Copyright [2019] <Copyright fanghao>
Folder::Folder(Folder&& f)
{
    move_Messages(&f);
}
 
Folder& Folder::operator=(Folder&& f)
{
    if (this != &f) {
        remove_from_Messages();
        move_Messages(&f);
    }
    return *this;
}
