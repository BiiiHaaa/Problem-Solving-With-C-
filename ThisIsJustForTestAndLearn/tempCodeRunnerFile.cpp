    cout << "Please enter The First Number : \n";
    cin >> num1;
    cout << "Please enter The Second Number : \n";
    cin >> num2;
    cout << "Please enter The Third Number : \n";
    cin >> num3;
    if(num1 > num2 ) {
        if(num1 > num3) {
            cout << "The greatest Number between "<<num1 <<" and "<<num2<<" and " << num3 << " is " << num1;
        }else if (num1 < num3){
            cout << "The greatest Number between "<<num1 <<" and "<<num2<<" and " << num3 << " is " << num3;
        }
    }else if(num2 > num3) {
        cout << "The greatest Number between "<<num1 <<" and "<<num2<<" and " << num3 << " is " << num2;
    }else if(num2 < num3) {
        cout << "The greatest Number between "<<num1 <<" and "<<num2<<" and " << num3 << " is " << num3;
    }