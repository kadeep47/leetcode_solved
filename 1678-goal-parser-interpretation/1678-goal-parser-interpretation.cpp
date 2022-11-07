class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string re;
        cout << n <<endl;
        for(int i =0;i<n;i++){
            if(command[i] == '(' && command[i+1]==')'){
                re.push_back('o');
                i++;
                cout << i << endl;
            }else if(command[i] == '(' && command[i+1] == 'a'){
                re.push_back('a');re.push_back('l');
                i+=3;
                cout << " 33 " << i << endl;
            }else{
                re.push_back('G');
                cout << "gg "<< i << endl;
            }
            cout << re<<endl;
        }
        return re;
    }
};