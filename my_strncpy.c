// Description
// Reproduce the behavior of the function strncpy.
char* my_strncpy(char* dest,char* src,int n){
    char* dest_start=dest;
    for (int i=0;i<n;i++){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
    return dest_start;
    
}