//#include<iostream>
//#include<fstream>
//#include<conio.h>
//using namespace std;
//#include <string>
//#include <random>
//#include <algorithm>
//#include <deque>
//using namespace std;
//string generateRandomId(int length) {
//    const string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//    random_device random_device;
//    mt19937 generator(random_device());
//    uniform_int_distribution<> distribution(0, characters.size() - 1);
//
//    string random_id;
//    for (int i = 0; i < length; ++i) {
//        random_id += characters[distribution(generator)];
//    }
//    return random_id;
//}
//long long sizeOf(const string& filename) {
//    std::ifstream file(filename, ios::binary | ios::ate);
//
//    if (!file.is_open()) {
//        std::cerr << "Ошибка открытия файла: " << filename << std::endl;
//        return -1; // Ошибка: не удалось открыть файл
//    }
//
//    return file.tellg();
//}
//struct Student {
//    string surname[4];
//    int marks[4];
//};
//int main(){
//    setlocale(LC_ALL, "Ru");
//    //ofstream fout("fileM.txt", ios::app);
//    ifstream fin;
//    bool fl = 1;
//    Student student;
//    ofstream fout;
//    do {
//        int a;
//        //fin.open("../../компсети3/x64/Debug/result2.bin", ios::binary);
//        fout.open("../../компсети2/x64/Debug/fileM2.bin", ios::binary);
//        string s;
//        string id = generateRandomId(4);
//        id += " ";
//        //fout.open("fileM.txt");
//        //fout << generateRandomId(4) << " ";
//        //cout << "введите количество оценок: ";
//        int n = 4;
//        //cin >> n;
//        cout << "введите оценки: ";
//        //ofstream fout("../../компсети2/x64/Debug/fileM2.bin", ios::binary);
//        //fout << generateRandomId(4) << " ";
//        char buff[9];
//        for (int i = 0; i < 4; i++) {
//            //buff[i] = id.at(i);
//            student.surname[i] = id.at(i);
//        }
//        for (int i = 0, p = 5; i < n; i++, p++) {
//            //cin >> buff[p];
//            cin >> student.marks[i];
//        }
//        //fout.write(buff, sizeof(buff));
//        fout.write((char*)&student, sizeof(student));
//        //fout << endl;
//        fout.close();
//        long s1 = sizeOf("../../компсети3/x64/Debug/result2.bin");
//        long s2 = s1;
//        while (s2 == s1) {
//            s2 = s1;
//            s1 = sizeOf("../../компсети3/x64/Debug/result2.bin");
//        }
//        fin.open("../../компсети3/x64/Debug/result2.bin", ios::binary);
//        char buff2[13];
//        //fin.read(buff2, sizeof(buff2));
//
//        fin.read((char*)&a, sizeof(a));
//        fin.close();
//        cout << 1 << endl;
//        switch (a) {
//        case 0: {cout << "стипендия равна 3128\n"; break; }
//        case 1: {cout << "стипендия равна 2100\n"; break; }
//        case 2: {cout << "стипендия равна 0\n"; break; }
//        }
//              //string result = "";
//              //for (int i = 0; i < sizeof(buff2); i++)
//              //    result += buff2[i];
//              ////cout << "стипендия равна: " << result.substr(5) << endl;
//              ////if (fin.is_open()) {
//              ////    //cout <<  endl;
//              ////    while (getline(fin, s)) {
//              ////        cout << "стипендия равна: " <<s.substr(5) << endl;
//
//              ////    }
//              ////}
//              //fin.close();
//              //ofstream ofs;
//              //ofs.open("../../компсети3/x64/Debug/result2.bin", ios::out | ios::trunc);
//              //ofs.close();
//              //cout << "стипендия равна: " << result.substr(5) << endl;
//              //cout << "Для ввода оценок нажмите на любую клавишу, для выхода из программы нажмите esc" << endl;
//
//    } while (_kbhit() || _getch() != 27);
//        //fout.close();
//}




//#include<iostream>
//#include<fstream>
//#include<conio.h>
//using namespace std;
//#include <string>
//#include <random>
//#include <algorithm>
//#include <deque>
//
//long long sizef(const string& filename) {
//    std::ifstream file(filename, std::ios::binary | std::ios::ate);
//
//    if (!file.is_open()) {
//        std::cerr << "Не удалось открыть файл: " << filename << std::endl;
//        return -1; // Или другое значение, указывающее на ошибку
//    }
//
//    std::streamsize size = file.tellg();
//    file.close();
//
//    if (size == std::streamsize(-1)) { // Проверка на ошибку
//        std::cerr << "Ошибка при получении размера файла (ifstream)" << std::endl;
//        return -1;
//    }
//
//    return size;
//}
//
//string generateRandomId(int length) {
//    const string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//    random_device random_device;
//    mt19937 generator(random_device());
//    uniform_int_distribution<> distribution(0, characters.size() - 1);
//
//    string random_id;
//    for (int i = 0; i < length; ++i) {
//        random_id += characters[distribution(generator)];
//    }
//    return random_id;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    ofstream in;
//    ifstream out;
//    string id = generateRandomId(4);
//    id += " ";
//    do {
//
//
//        cout << "Введите кол-во оценок, которое хотите ввести:" << endl;
//        in.open("C:/Users/yacen/source/repos/компсети2/x64/Debug/fileM.txt", ios::app);
//        int mark;
//        int n;
//        cin >> n;
//        int k = 0;
//        cout << "Введите оценки" << endl;
//        string s = "";
//        while (k < n)
//        {
//            cin >> mark;
//            s += to_string(mark) + " ";//чтобы программы не мешали друг другу
//            k++;
//        }
//        in << id << " " << s << endl;
//        in.close();
//
//        long s1 = sizef("C:/Users/yacen/source/repos/компсети3/x64/Debug/result.txt");
//        long s2 = s1;
//        while (s2 == s1)
//        {
//            s2 = s1;
//            s1 = sizef("C:/Users/yacen/source/repos/компсети3/x64/Debug/result.txt");
//        }
//        out.open("C:/Users/yacen/source/repos/компсети3/x64/Debug/result.txt");
//        s = "";
//        string res = "";
//        while (!out.eof() && getline(out, s))
//        {
//            if (s.find(id) != string::npos)
//            {
//                res = s;
//            }
//        }
//        out.close();
//        cout << "Стипендия равна:" << res.substr(5) << endl;
//        cout << "Для ввода оценок нажмите на любую клавишу, для выхода из программы нажмите esc" << endl;
//    } while (_kbhit() || _getch() != 27);
//    cout << "Exiting...";
//
//}

//
//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main() {
//    std::string filename;
//    std::string read_string;
//
//    std::ifstream infile("../../компсети2/x64/Debug/fileM2.bin", std::ios::binary);
//
//    if (!infile.is_open()) {
//        std::cerr << "Ошибка открытия файла для чтения!" << std::endl;
//        return 1;
//    }
//
//    // Читаем длину строки
//    size_t length;
//    infile.read(reinterpret_cast<char*>(&length), 9);
//
//    // Выделяем память для строки
//    read_string.resize(length);
//
//    // Читаем строку
//    infile.read(&read_string[0], 9); // Важно использовать &read_string[0] для получения указателя на буфер
//
//    infile.close();
//
//    std::cout << "Прочитанная строка: " << read_string << std::endl;
//
//    return 0;
//}

//
//#include<iostream>
//#include<fstream>
//#include<conio.h>
//using namespace std;
//#include <string>
//#include <random>
//#include <algorithm>
//#include <deque>
//#include <chrono>
//#include <thread>
//using namespace std;
//string generateRandomId(int length) {
//    const string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//    random_device random_device;
//    mt19937 generator(random_device());
//    uniform_int_distribution<> distribution(0, characters.size() - 1);
//
//    string random_id;
//    for (int i = 0; i < length; ++i) {
//        random_id += characters[distribution(generator)];
//    }
//    return random_id;
//}
//long long sizeOf(const string& filename) {
//    std::ifstream file(filename, ios::binary | ios::ate);
//
//    if (!file.is_open()) {
//        std::cerr << "Ошибка открытия файла: " << filename << std::endl;
//        return -1; // Ошибка: не удалось открыть файл
//    }
//
//    return file.tellg();
//}
//struct Student {
//    string surname;
//    int marks[4];
//};
//int main() {
//    setlocale(LC_ALL, "Ru");
//    ifstream fin;
//    Student student;
//    ofstream fout;
//    do {
//        int a=-1;
//        fout.open("../../компсети2/x64/Debug/fileM2.bin", ios::binary);
//        string s;
//        string id = generateRandomId(4);
//        id += " ";
//        int n = 4;
//        cout << "введите оценки: ";
//        student.surname = id;
//        for (int i = 0, p = 5; i < n; i++, p++) {
//            cin >> student.marks[i];
//        }
//        //fout.open("../../компсети2/x64/Debug/fileM2.bin", ios::binary | ios::out);
//        fout.write((char*)&student, sizeof(student));
//        fout.close();
//        long s1 = sizeOf("../../компсети3/x64/Debug/result2.bin");
//        long s2 = s1;
//        this_thread::sleep_for(chrono::milliseconds(100));
//        fin.open("../../компсети3/x64/Debug/result2.bin", ios::binary);
//
//        //cout << fin.gcount() << endl;
//        fin.read((char*)&a, sizeof(a));
//        fin.close();
//        switch (a) {
//        case 0: {cout << "стипендия равна: 3126.82\n"; break; }
//        case 1: {cout << "стипендия равна: 2046.32\n"; break; }
//        case 2: {cout << "стипендия равна: 0\n"; break; }
//        }
//        cout << "Для ввода оценок нажмите на любую клавишу, либо нажмите esc, чтобы завершить программу" << endl;
//    } while (_kbhit() || _getch() != 27);
//}

//#include <iostream>
//#include <fstream>
//#include <cstring> // Используйте <cstring> вместо <string.h>
//
//using namespace std;
//
//struct Worker {
//    char Name[25]; // Фамилия
//    float salary; // Зар. плата
//    int age;
//}; // Возраст
//
//int main() {
//    const char* FName = "f1.bin"; // Путь к файлу
//    Worker teacher; // объект teacher
//    Worker w1; // объект w1
//
//    /* ЗАПОЛНЯЕМ СТРУКТУРУ */
//    strncpy_s(teacher.Name, sizeof(teacher.Name), "Pupkin", sizeof(teacher.Name) - 1); // Безопасная версия strncpy
//    teacher.Name[sizeof(teacher.Name) - 1] = '\0'; // Гарантируем завершающий нулевой символ
//    teacher.age = 30;
//    teacher.salary = 1523.99;
//
//    /* ЗАПИСЫВАЕМ СТРУКТУРУ В ФАЙЛ */
//    ofstream f1(FName, ios::binary | ios::out);
//    if (!f1.is_open()) {
//        cerr << "Ошибка открытия файла для записи: " << FName << endl;
//        return 1; // Возвращаем код ошибки
//    }
//    f1.write((char*)&teacher, sizeof(teacher));
//    f1.close();
//
//    /* ЧИТАЕМ СТРУКТУРУ ИЗ ФАЙЛА */
//    ifstream f2(FName, ios::binary | ios::in);
//    if (!f2.is_open()) {
//        cerr << "Ошибка открытия файла для чтения: " << FName << endl;
//        return 1; // Возвращаем код ошибки
//    }
//    f2.read((char*)&w1, sizeof(teacher));
//    f2.close();
//
//    /* ВЫВОД ДАННЫХ НА ЭКРАН */
//    cout << w1.Name << '\t' << w1.age << '\t' << w1.salary << '\n';
//    return 0;
//}




//TCP !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//#include <iostream>
//#include <string>
//
////#ifdef _WIN32
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#pragma comment(lib, "ws2_32.lib")
////#else
////#include <sys/socket.h>
////#include <netinet/in.h>
////#include <unistd.h>
////#include <arpa/inet.h>
////#endif
//
//using namespace std;
//
//struct convert {
//    double amount;
//    string from;
//    string to;
//};
//const int PORT = 12345;
//const int BUFFER_SIZE = 1024;
//const char* SERVER_IP = "127.0.0.1"; // IP-адрес сервера
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//    char buff[1024];
//    if (WSAStartup(0x0202, (WSADATA*)&buff[0]))
//    { // Ошибка!
//        cout << "Error WSAStartup\n" << WSAGetLastError();
//        return -1;
//    }
//
//    // 1. Создание сокета
//    SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
//    //if (clientSocket == -1) {
//    //    std::cerr << "Не удалось создать сокет." << std::endl;
//    //    return 1;
//    //}
//
//    // 2. Настройка адреса сервера
//    sockaddr_in serverAddress;
//    serverAddress.sin_family = AF_INET;
//    //int inet_pton(int ai_family, const char* strptr,
//    //    void* addrptr);
//    //пытается преобразовать текстовую строку, на которую указывает
//    //    strptr, и сохранить двоичный результат в поле с указателем
//    //    addrptr.
//    if (inet_pton(AF_INET, SERVER_IP, &serverAddress.sin_addr) <= 0) {
//        std::cerr << "Ошибка преобразования IP-адреса." << std::endl;
//        return 1; // Или другая обработка ошибки
//    }
//    serverAddress.sin_port = htons(PORT); // Преобразуем порт в сетевой порядок байтов
//
//    // 3. Подключение к серверу
//    //Ориентированная на соединение программа - клиент вызывает
//    //    функцию connect, чтобы настроить сокет на сетевое соединение
//    //    с сервером.Функция connect размещает информацию о локальной и удаленной конечных точках соединения в структуре данных
//    //    сокета.Функция connect требует, чтобы были указаны : дескриптор сокета клиента, указатель на структуру, содержащую информацию об удаленном компьютере, и длина этой структуры.
//    //    Прототип функции connect :
//    //int connect(SOCKET socket_handle,
//    //    const struct sockaddr FAR * remote_socket_address, int address_length);
//
//    if (connect(clientSocket, (sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) {
//        std::cerr << "Не удалось подключиться к серверу." << std::endl;
//        return 1;
//    }
//
//    std::cout << "Подключено к серверу." << std::endl;
//
//    // 4. Общение с сервером
//    char buffer[BUFFER_SIZE];
//    string message = "";
//
//    while (true) {
//        cout << "Введите сумму и валюту (доступные валюты: USD, EUR, RUB, CNY, JPY) для перевода (например, 100 RUB USD) или 'exit' для выхода: ";
//        getline(cin, message); // Используем getline для чтения строки с пробелами
//
//        cout << "Отправляем серверу: " << message << endl;
//
//        int bytesSent = send(clientSocket, message.c_str(), message.length(), 0);
//        if (bytesSent == -1) {
//            cerr << "Ошибка отправки данных." << endl;
//            break;
//        }
//
//
//        // Отправляем сообщение серверу
//        //После того как соединение установлено, потоковые сокеты
//        //    могут обмениваться с удаленным узлом данными при помощи
//        //    функций
//        //    int send(socket s, const char far * buf,
//        //        int len, int flags)
//        //    и
//        //    int recv(socket s, char far * buf, int len,
//        //        int flags)
//        //    (для посылки и приема данных соответственно).
//        //    Аргументы функций аналогичны.В качестве первого аргумента задается дескриптор сокета, откуда принимаются или куда
//        //    передаются данные.Второй параметр – буфер сообщения, указывает на буфер, т.е.область памяти, в которой расположены предназначенные для передачи данные.Прикладная программа должна
//        //    предварительно отвести память для этого буфера, а затем либо при
//        //    передаче заполнить его данными, либо при приеме извлекать информацию из указанного буфера.Третий параметр вызова функции обозначает длину буфера, т.е.количество данных для передачи.Функции send, resv предназначены только для потоковых
//        //    сокетов – они не требуют указания адреса назначения.
//
//        //send(clientSocket, message.c_str(), message.length(), 0);
//
//
//        // Если отправили "exit", завершаем соединение
//        if (message == "exit") {
//            break;
//        }
//
//        // Получаем ответ от сервера
//        memset(buffer, 0, BUFFER_SIZE);
//        int bytesReceived = recv(clientSocket, buffer, BUFFER_SIZE, 0);
//        if (bytesReceived > 0) {
//            buffer[bytesReceived] = '\0';
//            cout << "Получено от сервера: сумма равна: " << buffer << std::endl;
//        }
//        else {
//            cout << "Сервер отключился." << std::endl;
//            break;
//        }
//    }
//    closesocket(clientSocket);
//    return 0;
//}

//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <iostream>
//#include <winsock2.h>
//#include <string>
//#include <windows.h>
//#pragma comment (lib, "Ws2_32.lib")
//using namespace std;
//#define SRV_HOST "localhost" //имя сервера
//#define SRV_PORT 1234 // порт сервера
//#define CLNT_PORT 1235 // порт клиента
//#define BUF_SIZE 64 
//using namespace std;
//
//struct convert {
//    double amount;
//    string from;
//    string to;
//};
//const int PORT = 12345;
//const int BUFFER_SIZE = 1024;
//const char* SERVER_IP = "127.0.0.1"; // IP-адрес сервера
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//    //#ifdef _WIN32
//    //    WSADATA wsaData;
//    //    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
//    //        std::cerr << "WSAStartup failed." << std::endl;
//    //        return 1;
//    //    }
//    //#endif
//    char buff[1024];
//    if (WSAStartup(0x0202, (WSADATA*)&buff[0]))
//    { // Ошибка!
//        cout << "Error WSAStartup\n" << WSAGetLastError();
//        return -1;
//    }
//
//    // 1. Создание сокета
//    SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
//    if (clientSocket == -1) {
//        std::cerr << "Не удалось создать сокет." << std::endl;
//        return 1;
//    }
//
//    // 2. Настройка адреса сервера
//    sockaddr_in clint_sin, srv_sin;
//    hostent* hp;
//    clint_sin.sin_family = AF_INET;
//    clint_sin.sin_addr.s_addr = 0;
//    clint_sin.sin_port = htons(CLNT_PORT);
//    //int inet_pton(int ai_family, const char* strptr,
//    //    void* addrptr);
//    //пытается преобразовать текстовую строку, на которую указывает
//    //    strptr, и сохранить двоичный результат в поле с указателем
//    //    addrptr.
//    //if (inet_pton(AF_INET, SERVER_IP, &clint_sin.sin_addr) <= 0) {
//    //    std::cerr << "Ошибка преобразования IP-адреса." << std::endl;
//    //    return 1; // Или другая обработка ошибки
//    //}
//    //clint_sin.sin_port = htons(PORT); // Преобразуем порт в сетевой порядок байтов
//    //bind(clientSocket, (sockaddr*)&clint_sin, sizeof(clint_sin));
//    // определение параметров сервера
//    hp = gethostbyname(SRV_HOST);
//    srv_sin.sin_port = htons(SRV_PORT);
//    srv_sin.sin_family = AF_INET;
//    ((unsigned long*)&srv_sin.sin_addr)[0] =
//        ((unsigned long**)hp->h_addr_list)[0][0];
//    // соединение с сервером
//    connect(clientSocket, (sockaddr*)&srv_sin, sizeof(srv_sin));
//    string mst;
//    if (connect(clientSocket, (sockaddr*)&srv_sin, sizeof(srv_sin)) == SOCKET_ERROR) {
//        cerr << "Ошибка подключения к серверу: " << WSAGetLastError() << endl;
//        closesocket(clientSocket); // Закрыть сокет при ошибке
//        WSACleanup();
//        return 1;
//    }
//    cout << "Успешно подключено к серверу." << endl;
//    // 3. Подключение к серверу
//    //Ориентированная на соединение программа - клиент вызывает
//    //    функцию connect, чтобы настроить сокет на сетевое соединение
//    //    с сервером.Функция connect размещает информацию о локальной и удаленной конечных точках соединения в структуре данных
//    //    сокета.Функция connect требует, чтобы были указаны : дескриптор сокета клиента, указатель на структуру, содержащую информацию об удаленном компьютере, и длина этой структуры.
//    //    Прототип функции connect :
//    //int connect(SOCKET socket_handle,
//    //    const struct sockaddr FAR * remote_socket_address, int address_length);
//
//    /*if (connect(clientSocket, (struct sockaddr*)&clint_sin, sizeof(clint_sin)) < 0) {
//        std::cerr << "Не удалось подключиться к серверу." << std::endl;
//        return 1;
//    }
//
//    std::cout << "Подключено к серверу." << std::endl;*/
//
//    // 4. Общение с сервером
//    char buffer[BUFFER_SIZE];
//    string message = "";
//
//    while (true) {
//        cout << "Введите сумму и валюту (например, 100 RUB) или 'exit' для выхода: ";
//        getline(cin, message); // Используем getline для чтения строки с пробелами
//
//        cout << "Отправляем серверу: " << message << endl;
//
//        int bytesSent = send(clientSocket, message.c_str(), message.length(), 0);
//        if (bytesSent == -1) {
//            cerr << "Ошибка отправки данных." << endl;
//            break;
//        }
//
//
//        // Отправляем сообщение серверу
//        //После того как соединение установлено, потоковые сокеты
//        //    могут обмениваться с удаленным узлом данными при помощи
//        //    функций
//        //    int send(socket s, const char far * buf,
//        //        int len, int flags)
//        //    и
//        //    int recv(socket s, char far * buf, int len,
//        //        int flags)
//        //    (для посылки и приема данных соответственно).
//        //    Аргументы функций аналогичны.В качестве первого аргумента задается дескриптор сокета, откуда принимаются или куда
//        //    передаются данные.Второй параметр – буфер сообщения, указывает на буфер, т.е.область памяти, в которой расположены предназначенные для передачи данные.Прикладная программа должна
//        //    предварительно отвести память для этого буфера, а затем либо при
//        //    передаче заполнить его данными, либо при приеме извлекать информацию из указанного буфера.Третий параметр вызова функции обозначает длину буфера, т.е.количество данных для передачи.Функции send, resv предназначены только для потоковых
//        //    сокетов – они не требуют указания адреса назначения.
//
//        //send(clientSocket, message.c_str(), message.length(), 0);
//
//
//        // Если отправили "exit", завершаем соединение
//        if (message == "exit") {
//            break;
//        }
//
//        // Получаем ответ от сервера
//        memset(buffer, 0, BUFFER_SIZE);
//        int bytesReceived = recv(clientSocket, buffer, BUFFER_SIZE, 0);
//        if (bytesReceived > 0) {
//            buffer[bytesReceived] = '\0';
//            cout << "Получено от сервера: сумма равна: " << buffer << std::endl;
//        }
//        else {
//            cout << "Сервер отключился." << std::endl;
//            break;
//        }
//    }
//
//    // 5. Закрываем сокет
//#ifdef _WIN32
//    closesocket(clientSocket);
//    WSACleanup();
//#else
//    close(clientSocket);
//#endif
//
//    return 0;
//}
//


//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <winsock2.h>
//#include <string>
//#include <windows.h>
//#include <iostream>
//#pragma comment(lib, "ws2_32.lib")
//#pragma warning(disable:4996)
////#define SERVERADDR "127.0.0.1" // IP-адрес
//
//using namespace std;
//
//const int PORT = 12345;
//const int BUFFER_SIZE = 1024;
//const char* SERVERADDR = "127.0.0.1"; // IP-адрес сервера
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//    char buff[1024];
//    if (WSAStartup(0x0202, (WSADATA*)&buff[0]))
//    { // Ошибка!
//        cout << "Error WSAStartup\n" << WSAGetLastError();
//        return -1;
//    }
//
//    // 1. Создание сокета
//    SOCKET clientSocket = socket(AF_INET, SOCK_DGRAM, 0);
//    if (clientSocket == INVALID_SOCKET) {
//        std::cerr << "Не удалось создать сокет." << std::endl;
//        WSACleanup();
//        return 1;
//    }
//
//    // 2. Настройка адреса сервера
//    sockaddr_in serverAddress;
//    serverAddress.sin_family = AF_INET;
//    //int inet_pton(int ai_family, const char* strptr,
//    //    void* addrptr);
//    //пытается преобразовать текстовую строку, на которую указывает
//    //    strptr, и сохранить двоичный результат в поле с указателем
//    //    addrptr.
//    //if (inet_pton(AF_INET, SERVER_IP, &serverAddress.sin_addr) <= 0) {
//    //    std::cerr << "Ошибка преобразования IP-адреса." << std::endl;
//    //    return 1; // Или другая обработка ошибки
//    //}
//    hostent* hst;
//    serverAddress.sin_port = htons(PORT); // Преобразуем порт в сетевой порядок байтов
//    if (inet_addr(SERVERADDR))
//        // адрес в числовом формате?
//        serverAddress.sin_addr.s_addr = inet_addr(SERVERADDR);
//    else
//    if (hst = gethostbyname(SERVERADDR))
//        // получение IP-адреса по символьному имени по DNS
//        serverAddress.sin_addr.s_addr =
//        ((unsigned long**)hst->h_addr_list)[0][0];
//    else
//        // адрес получить не удалось
//    {
//        cout << "Unknown Host: " << WSAGetLastError() << "\n";
//        closesocket(clientSocket);
//        WSACleanup();
//        return -1;
//    }
//    // 3. Подключение к серверу
//    //Ориентированная на соединение программа - клиент вызывает
//    //    функцию connect, чтобы настроить сокет на сетевое соединение
//    //    с сервером.Функция connect размещает информацию о локальной и удаленной конечных точках соединения в структуре данных
//    //    сокета.Функция connect требует, чтобы были указаны : дескриптор сокета клиента, указатель на структуру, содержащую информацию об удаленном компьютере, и длина этой структуры.
//    //    Прототип функции connect :
//    //int connect(SOCKET socket_handle,
//    //    const struct sockaddr FAR * remote_socket_address, int address_length);
//
//    /*if (connect(clientSocket, (sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) {
//        std::cerr << "Не удалось подключиться к серверу." << std::endl;
//        return 1;
//    }*/
//
//    std::cout << "Подключено к серверу." << std::endl;
//
//    // 4. Общение с сервером
//    char buffer[BUFFER_SIZE];
//    string message = "";
//
//    while (true) {
//        // чтение сообщения с клавиатуры
//        cout << "отправлено на сервер: ";
//        string SS;
//        getline(cin, SS);
//        if (SS == "quit") break;
//        // окончание взаимодействия
//        // передача сообщений на сервер
//        sendto(clientSocket, (char*)&SS[0], SS.size(), 0,
//            (sockaddr*)&serverAddress, sizeof(serverAddress));
//        sockaddr_in SRaddr; // адресная структура
//        int SRaddr_size = sizeof(SRaddr);
//        // прием сообщения с сервера
//        int n = recvfrom(clientSocket, buff, sizeof(buff), 0,
//            (sockaddr*)&SRaddr, &SRaddr_size);
//        if (n == SOCKET_ERROR) {
//            cout << "recvfrom() error:" << WSAGetLastError() << "\n";
//            closesocket(clientSocket);
//            WSACleanup(); return -1;
//        }
//        // вывод принятого с сервера сообщения на экран
//        buff[n] = '\0';
//        cout << "получено с сервера: " << buff << "\n";
//
//    }
//    closesocket(clientSocket);
//    return 0;
//}


// CLIENT_CHAT
//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <winsock2.h>
//#include <windows.h>
//#include <string>
//#include <iostream>
//#pragma comment(lib, "ws2_32.lib")
//// #pragma warning(disable: 4996)
//using namespace std;
//SOCKET Connection;
//enum Packet { Pack, Test, Private }; // типы пакетов
///* дополнительный поток клиента для отправки сообщений */
//DWORD WINAPI ClientThread(LPVOID sock)
//{
//	SOCKET Con = ((SOCKET*)sock)[0];
//	Packet packettype;
//	// получение пакетов от сервера
//	while (1)
//	{
//		int result = recv(Con, (char*)&packettype, sizeof(Packet), NULL);
//		if (result <= 0) {
//			cout << "Disconnected from server" << endl;
//			break;
//		}
//		// прием типа пакета
//		if (packettype == Pack)
//		{
//			cout << "type packet=PACK" << endl;
//			// определение объема информационного пакета
//			int msg_size;
//			recv(Con, (char*)&msg_size, sizeof(int), NULL);
//			char* msg = new char[msg_size + 1];
//			msg[msg_size] = '\0';
//			// прием данных пакета
//			recv(Con, msg, msg_size, NULL);
//			cout << msg << endl;
//			delete[] msg;
//		}
//		else if (packettype == Private) {
//			// Обработка приватного сообщения
//			int msg_size;
//			recv(Con, (char*)&msg_size, sizeof(int), NULL);
//			char* msg = new char[msg_size + 1];
//			msg[msg_size] = '\0';
//			recv(Con, msg, msg_size, NULL);
//			cout << "[PRIVATE] " << msg << endl;
//			delete[] msg;
//		}
//		else if (packettype == Test) {
//			cout << "Test packet received" << endl;
//		}
//		else {
//			cout << "Unrecognized packet: " << packettype << endl;
//		}
//	}
//	closesocket(Connection);
//	return 0;
//}
//void SendMessageToServer(const string& message, Packet type = Pack) {
//	int msg_size = message.size();
//	send(Connection, (char*)&type, sizeof(Packet), NULL);
//	send(Connection, (char*)&msg_size, sizeof(int), NULL);
//	send(Connection, message.c_str(), msg_size, NULL);
//}
//void SendPrivateMessage(const string& recipient, const string& message) {
//	// Формат: получатель|сообщение
//	string fullMessage = recipient + "|" + message;
//	SendMessageToServer(fullMessage, Private);
//}
//int main() // основной поток
//{
//	WSAData wsaData;
//	WORD Ver = MAKEWORD(2, 1);
//	if (WSAStartup(Ver, &wsaData) != 0)
//	{
//		cout << "Error" << endl;
//		exit(1);
//	}
//	// определение параметров сервера
//	sockaddr_in addr;
//	int sizeofaddr = sizeof(addr);
//	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
//	// loopback!
//	addr.sin_port = htons(123);
//	addr.sin_family = AF_INET;
//	Connection = socket(AF_INET, SOCK_STREAM, NULL);
//	// соединение с сервером
//	if (connect(Connection, (SOCKADDR*)&addr,
//		sizeof(addr)) != 0)
//	{
//		cout << "Error: failed connect to server.\n";
//		return 1;
//	}
//	cout << "Connected!\n";
//	// Запрашиваем имя клиента
//	string clientName;
//	cout << "Enter your name: ";
//	getline(cin, clientName);
//
//	//int nameSize = clientName.size();
//	//Packet packetType = Pack; // Используем тип пакета Pack для имени
//	//send(Connection, (char*)&packetType, sizeof(Packet), NULL);
//	//send(Connection, (char*)&nameSize, sizeof(int), NULL);
//	//send(Connection, clientName.c_str(), nameSize, NULL);
//	SendMessageToServer(clientName); // Отправляем имя серверу
//
//	/* создание дочернего потока для приема сообщений от
//	сервера */
//	CreateThread(NULL, NULL, ClientThread, &Connection,
//		NULL, NULL);
//	// отправка данных серверу в основном потоке
//	string msg1;
//	while (true) {
//		getline(cin, msg1);
//		int msg_size = msg1.size();
//		if (msg1.empty()) continue;
//		if (msg1.find("/priv ") == 0) {
//			size_t space1 = msg1.find(' ');
//			size_t space2 = msg1.find(' ', space1 + 1);
//
//			if (space2 != string::npos) {
//				string recipient = msg1.substr(space1 + 1, space2 - space1 - 1);
//				string message = msg1.substr(space2 + 1);
//				SendPrivateMessage(recipient, message);
//			}
//			else {
//				cout << "Invalid format. Use: /priv username message" << endl;
//			}
//		}
//		else {
//			// Отправка публичного сообщения
//			SendMessageToServer(msg1);
//		}
//		// передача информационного пакета
//		/*Packet packettype = Pack;
//		send(Connection, (char*)&packettype, sizeof(Packet),
//			NULL);
//		send(Connection, (char*)&msg_size, sizeof(int),
//			NULL);
//		send(Connection, (char*)&msg1[0], msg_size, NULL);
//		Sleep(1000);*/
//	}
//	system("pause");
//	return 0;
//}

//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <winsock2.h>
//#include <windows.h>
//#include <string>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#pragma comment(lib, "ws2_32.lib")
//using namespace std;
//
//SOCKET Connection;
//enum Packet { Pack, Test, Private, UserList, UserConnected, UserDisconnected };
//
//vector<string> onlineUsers;
//
//DWORD WINAPI ClientThread(LPVOID sock) {
//    SOCKET Con = *((SOCKET*)sock);
//    Packet packettype;
//
//    while (true) {
//        // Получаем тип пакета
//        int result = recv(Con, (char*)&packettype, sizeof(Packet), 0);
//        if (result <= 0) {
//            cout << "Disconnected from server" << endl;
//            break;
//        }
//
//        // Получаем длину сообщения
//        int msg_size;
//        result = recv(Con, (char*)&msg_size, sizeof(int), 0);
//        if (result <= 0) {
//            cout << "Error receiving message size" << endl;
//            break;
//        }
//
//        // Получаем само сообщение
//        char* msg = new char[msg_size + 1];
//        msg[msg_size] = '\0';
//        result = recv(Con, msg, msg_size, 0);
//        if (result <= 0) {
//            cout << "Error receiving message" << endl;
//            delete[] msg;
//            break;
//        }
//
//        // Обрабатываем в зависимости от типа пакета
//        switch (packettype) {
//        case Pack:
//            cout << msg << endl;
//            break;
//        case Private:
//            cout << "[PRIVATE] " << msg << endl;
//            break;
//        case Test:
//            cout << "Test: " << msg << endl;
//            break;
//        case UserList: {
//            onlineUsers.clear();
//            string users(msg);
//            size_t pos = 0;
//            while ((pos = users.find(',')) != string::npos) {
//                onlineUsers.push_back(users.substr(0, pos));
//                users.erase(0, pos + 1);
//            }
//            if (!users.empty()) onlineUsers.push_back(users);
//            break;
//        }
//        case UserConnected:
//            cout << "User connected: " << msg << endl;
//            onlineUsers.push_back(msg);
//            break;
//        case UserDisconnected:
//            cout << "User disconnected: " << msg << endl;
//            onlineUsers.erase(remove(onlineUsers.begin(), onlineUsers.end(), msg), onlineUsers.end());
//            break;
//        default:
//            cout << "Unknown packet type: " << packettype << endl;
//        }
//
//        delete[] msg;
//    }
//    closesocket(Con);
//    return 0;
//}
//
//bool SendPacket(Packet type, const string& message) {
//    int msg_size = message.size();
//
//    if (send(Connection, (char*)&type, sizeof(Packet), 0) == SOCKET_ERROR)
//        return false;
//
//    if (send(Connection, (char*)&msg_size, sizeof(int), 0) == SOCKET_ERROR)
//        return false;
//
//    if (send(Connection, message.c_str(), msg_size, 0) == SOCKET_ERROR)
//        return false;
//
//    return true;
//}
//
//void SendPrivateMessage(const string& recipient, const string& message) {
//    // Формируем сообщение в формате "получатель|текст"
//    string fullMessage = recipient + "|" + message;
//    if (!SendPacket(Private, fullMessage)) {
//        cout << "Failed to send private message" << endl;
//    }
//}
//
//void PrintHelp() {
//    cout << "\nCommands:\n"
//        << "/help - Show help\n"
//        << "/list - Show online users\n"
//        << "/priv <name> <message> - Send private message\n"
//        << "Any other text - Public message\n\n";
//}
//
//int main() {
//    // Инициализация Winsock
//    WSADATA wsaData;
//    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
//        cerr << "WSAStartup failed" << endl;
//        return 1;
//    }
//
//    // Подключение к серверу
//    Connection = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
//    if (Connection == INVALID_SOCKET) {
//        cerr << "Socket creation failed" << endl;
//        WSACleanup();
//        return 1;
//    }
//
//    sockaddr_in serverAddr;
//    serverAddr.sin_family = AF_INET;
//    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
//    serverAddr.sin_port = htons(123);
//    if (connect(Connection, (sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
//        cerr << "Connection failed" << endl;
//        closesocket(Connection);
//        WSACleanup();
//        return 1;
//    }
//
//    cout << "Connected to server!" << endl;
//
//    // Отправка имени
//    string clientName;
//    cout << "Enter your name: ";
//    getline(cin, clientName);
//    SendPacket(Pack, clientName);
//
//    // Запуск потока для приема сообщений
//    CreateThread(NULL, NULL, ClientThread, &Connection, NULL, NULL);
//
//    PrintHelp();
//
//    // Основной цикл ввода
//    string input;
//    while (true) {
//        getline(cin, input);
//
//        if (input.empty()) continue;
//
//        if (input == "/help") {
//            PrintHelp();
//        }
//        else if (input == "/list") {
//            cout << "\nOnline users (" << onlineUsers.size() << "):\n";
//            for (const auto& user : onlineUsers) {
//                cout << " - " << user << endl;
//            }
//            cout << endl;
//        }
//        else if (input.find("/priv ") == 0) {
//            size_t space1 = input.find(' ');
//            size_t space2 = input.find(' ', space1 + 1);
//
//            if (space2 != string::npos) {
//                string recipient = input.substr(space1 + 1, space2 - space1 - 1);
//                string message = input.substr(space2 + 1);
//                SendPrivateMessage(recipient, message);
//            }
//            else {
//                cout << "Invalid format. Use: /priv username message" << endl;
//            }
//        }
//        else {
//            // Отправка публичного сообщения
//            SendPacket(Pack, input);
//        }
//    }
//
//    closesocket(Connection);
//    WSACleanup();
//    return 0;
//}


#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <winsock2.h>
#include <windows.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#pragma comment(lib, "ws2_32.lib")
using namespace std;

SOCKET Connection;
enum Packet { Pack, Test, Private, UserList, UserConnected, UserDisconnected };
vector<string> onlineUsers;

DWORD WINAPI ClientThread(LPVOID lpParam) {
    SOCKET sock = *(SOCKET*)lpParam;
    Packet packetType;

    while (true) {
        int result = recv(sock, (char*)&packetType, sizeof(Packet), 0);
        if (result <= 0) {
            cout << "Disconnected from server" << endl;
            break;
        }

        int msg_size;
        recv(sock, (char*)&msg_size, sizeof(int), 0);
        char* msg = new char[msg_size + 1];
        msg[msg_size] = '\0';
        recv(sock, msg, msg_size, 0);

        switch (packetType) {
        case Pack:
            cout << msg << endl;
            break;
        case Private:
            cout << msg << endl;
            break;
        case UserList: {
            onlineUsers.clear();
            string users(msg);
            size_t pos = 0;
            while ((pos = users.find(',')) != string::npos) {
                onlineUsers.push_back(users.substr(0, pos));
                users.erase(0, pos + 1);
            }
            if (!users.empty()) onlineUsers.push_back(users);
            break;
        }
        case UserConnected:
            cout << "User connected: " << msg << endl;
            onlineUsers.push_back(msg);
            break;
        case UserDisconnected:
            cout << "User disconnected: " << msg << endl;
            onlineUsers.erase(remove(onlineUsers.begin(), onlineUsers.end(), msg), onlineUsers.end());
            break;
        default:
            cout << "Unknown packet type: " << packetType << endl;
        }

        delete[] msg;
    }
    return 0;
}

bool SendPacket(Packet type, const string& message) {
    int msg_size = message.size();

    if (send(Connection, (char*)&type, sizeof(Packet), 0) == SOCKET_ERROR)
        return false;

    if (send(Connection, (char*)&msg_size, sizeof(int), 0) == SOCKET_ERROR)
        return false;

    if (send(Connection, message.c_str(), msg_size, 0) == SOCKET_ERROR)
        return false;

    return true;
}

void PrintHelp() {
    cout << "\nCommands:\n"
        << "/help - Show this help\n"
        << "/list - Show online users\n"
        << "/priv username message - Send private message\n"
        << "Any other text - Public message\n\n";
}

void PrintUserList() {
    cout << "\nOnline users (" << onlineUsers.size() << "):\n";
    for (const auto& user : onlineUsers) {
        cout << " - " << user << endl;
    }
    cout << endl;
}

int main() {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        cerr << "WSAStartup failed" << endl;
        return 1;
    }

    Connection = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (Connection == INVALID_SOCKET) {
        cerr << "Socket creation failed" << endl;
        WSACleanup();
        return 1;
    }

    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddr.sin_port = htons(123);

    if (connect(Connection, (sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        cerr << "Connection failed" << endl;
        closesocket(Connection);
        WSACleanup();
        return 1;
    }

    cout << "Connected to server!" << endl;

    string clientName;
    cout << "Enter your name: ";
    getline(cin, clientName);
    SendPacket(Pack, clientName);

    CreateThread(NULL, NULL, ClientThread, &Connection, NULL, NULL);
    PrintHelp();
    string input;
    while (true) {
        getline(cin, input);

        if (input.empty()) continue;

        if (input == "/help") {
            PrintHelp();
        }
        else if (input == "/list") {
            PrintUserList();
        }
        else if (input.find("/priv ") == 0) {
            size_t space1 = input.find(' ');
            size_t space2 = input.find(' ', space1 + 1);

            if (space2 != string::npos) {
                string recipient = input.substr(space1 + 1, space2 - space1 - 1);
                string message = input.substr(space2 + 1);
                SendPacket(Private, recipient + "|" + message);
            }
            else {
                cout << "Invalid format. Use: /priv username message" << endl;
            }
        }
        else {
            SendPacket(Pack, input);
        }
    }

    closesocket(Connection);
    WSACleanup();
    return 0;
}