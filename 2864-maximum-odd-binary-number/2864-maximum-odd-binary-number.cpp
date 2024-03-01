class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int number_of_set_bit = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                number_of_set_bit++;
            }
        }
        string max_odd_binary_number = ""; //1
        for(int j=0;j<number_of_set_bit-1;j++){
            max_odd_binary_number += '1';
        }
        cout<<max_odd_binary_number<<endl;
        int num_of_unset_bit = s.size()-number_of_set_bit;
        for(int j=0;j<num_of_unset_bit;j++){
            max_odd_binary_number += '0';
        }
        cout<<max_odd_binary_number<<endl;
        max_odd_binary_number += '1';
        cout<<max_odd_binary_number<<endl;

        return max_odd_binary_number;
    }
};