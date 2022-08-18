int convertFive(int n) {
    // Your code here
    string str = to_string(n);
    for (int i =0; i<str.size();i++){
        if (str[i]=='0'){
            str[i] = '5';
        }
    }
    int num = stoi(str);
    return num;
}