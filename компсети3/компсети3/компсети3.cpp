//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//using namespace std;
//int main()
//{
//    setlocale(LC_ALL, "Ru");
//    int k = 0;
//    string Prev;
//    ofstream fout("result.txt", ios::trunc);
//    while (1) {
//        ifstream fin("C:/Users/yacen/source/repos/компсети2/компсети2/fileM.txt");
//        string next;
//        string s;
//        double sum = 0;
//        if (fin.is_open()) {
//            while (getline(fin, s)) {
//                int numb;
//                next = s;
//                int i = 0;
//                stringstream ss(s);
//                while (ss >> numb)
//                    sum += numb;
//                cout << sum << endl;
//                //sum /= 5;
//                /*if (sum == 25)
//                    fout << "повышенная стипендия" << "\n";
//                if (sum <= 25 && sum >= 16)
//                    fout << "обычная стипендия" <<"\n";
//                if (sum < 16)
//                    fout << "стипендии нет(" << "\n";
//                fout << sum << endl;*/
//                /*for (int i = 0; i < 5; i++) {
//                    sum += s.at(i);
//                }*/
//                /*while (i < 5) {
//                    sum += next.at(i);
//                    i++;
//                }
//                fout << sum << endl;
//                break;*/
//
//            }
//            if (next != Prev) {
//                cout << next << endl;
//                //fout << next << endl;
//                Prev = next;
//                
//            }
//
//
//        }fin.close();
//
//
//        
//    }
//}


//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <filesystem>
//using namespace std;
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
//int a;
//int main()
//{
//    setlocale(LC_ALL, "Ru");
//    //ofstream fout("result.txt", ios::trunc)
//    //ifstream fin;
//    Student student;
//    while (1) {
//        string s;
//        ifstream fin;
//        fin.open("../../компсети2/x64/Debug/fileM2.bin", ios::binary);
//        //fin.open("C:/Users/yacen/source/repos/компсети2/компсети2/fileM.txt");
//        long s1 = sizeOf("../../компсети2/x64/Debug/fileM2.bin");
//        long s2 = s1;
//        if (!fin.is_open()) {
//            cerr << "Error: Could not open file " << endl;
//            break; // Выходим, если не удалось открыть файл
//        }
//        while (s2 == s1) {
//            s2 = s1;
//            s2 = sizeOf("../../компсети2/x64/Debug/fileM2.bin");
//
//        }
//        fin.read((char*)&student, sizeof(student));
//        //fin.close();
//        ofstream fout("../../компсети3/x64/Debug/result2.bin", ios::binary);
//        a = 0;
//        for (int i = 0; i < 4; i++) {
//            if (student.marks[i] == 4) a = 1;
//            if (student.marks[i] == 3) {
//                a = 2;
//                break;
//            }
//
//        }
//        //if (student.marks == 5) a = 0;
//        //if (student.marks == 4) a = 1;
//        //if (student.marks == 3) a = 2;
//        fout.open("../../компсети3/x64/Debug/result2.bin");
//        fout.write((char*)&a, sizeof(a));
//        fout.close();
//        /*string str = "";
//        string id;
//        string result = "";
//        char buffer[9] = { '0','0','0','0','0','0','0','0','0' };
//        fin.read(buffer, sizeof(buffer));
//        char resultM[13] = { '0','0','0','0','0','0','0','0','0','0', '0','0','0'};
//        for (int i = 0; i < 5; i++)
//            id += buffer[i];
//        result = id + " 3126,82";
//        for (int i = 5; i < sizeof(buffer); i++) {
//            if (buffer[i] == '3') {
//                result = id + " 0";
//                break;
//            }
//            if (buffer[i] == '4') {
//                result = id + " 2046,32";
//            }
//        }
//        for (int i = 0; i < result.size(); i++)
//            resultM[i] = result.at(i);
//        ofstream fout("../../компсети3/x64/Debug/result2.bin", ios::binary);
//        fout.write(resultM, sizeof(resultM));*/
//        //while (getline(fin, s)) {
//        //    int numb;
//        //    int sum = 0;
//        //    //fout << s << endl
//        //    fout << s.substr(0, 4) << " ";
//        //    stringstream ss(s);
//        //    while (ss >> numb)
//        //        sum += numb;
//        //    //fout << sum << endl;
//        //    if (s.find("3") == -1 && s.find("4") == -1) {
//        //        fout << 3126.82 << endl;
//        //        continue;
//        //    }
//        //    if (s.find("3") == -1 ) {
//        //        fout << 2046.32 << endl;
//        //        continue;
//        //    }
//        //    if (s.find("3")>=0) {
//        //        fout << 0 << endl;
//        //        continue;
//        //    }
//        //}
//        //cout << "success" << endl;
//        //fout.close();
//        //fin.close();
//        ofstream ofs;
//        ofs.open("../../компсети2/x64/Debug/fileM2.bin", ios::out | ios::trunc);
//        ofs.close();
//    }
//}

//#include <iostream>
//#include <fstream>
//#include <string>
//#include<conio.h>
//using namespace std;
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
//int main()
//{
//    ifstream in;
//
//    while (true)
//    {
//        in.open("C:/Users/yacen/source/repos/компсети2/x64/Debug/fileM.txt");
//        long s1 = sizef("C:/Users/yacen/source/repos/компсети2/x64/Debug/fileM.txt");
//        long s2 = s1;
//        int fl = 0;
//
//        if (!in.is_open()) {
//            cerr << "Error: Could not open file " << endl;
//            break; // Выходим, если не удалось открыть файл
//        }
//        while (s2 == s1)
//        {
//            s2 = s1;
//            s1 = sizef("C:/Users/yacen/source/repos/компсети2/x64/Debug/fileM.txt");
//        }
//        string s = "";
//        string id;
//        string res = "";
//
//        while (!in.eof() && getline(in, s))
//        {
//            id = s.substr(0, 4);
//            res = id + " 3126.82";
//            for (int i = 5; i < s.size(); i++)
//            {
//                if (s.at(i) == '3')
//                {
//                    res = id + " 0";
//                    break;
//                }
//                if (s.at(i) == '4')
//                {
//                    res = id + " 2046.32";
//                }
//            }
//        }
//        ofstream out("C:/Users/yacen/source/repos/компсети3/x64/Debug/result.txt", ios::app);
//        out << res << endl;
//        out.close();
//        in.close();
//    }
//}


//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <filesystem>
//#include <chrono>
//#include <thread>
//using namespace std;
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
//int a;
//int main() {
//    setlocale(LC_ALL, "Ru");
//    Student student;
//    ifstream fin;
//
//    while (true) {
//        bool  fl = 1;
//        fin.open("../../компсети2/x64/Debug/fileM2.bin", ios::binary);
//        if (!fin.is_open()) {
//            cerr << "Error: Could not open file " << endl;
//            break;
//        }
//        long s1 = sizeOf("../../компсети2/x64/Debug/fileM2.bin");
//        long s2 = s1;
//        while (s2 == s1) {
//            s2 = s1;
//            s2 = sizeOf("../../компсети2/x64/Debug/fileM2.bin");
//            
//        }
//        fin.read((char*)&student, sizeof(student));
//        if (fin.gcount() != sizeof(student)) {
//            //cerr << "Ошибка: Не удалось прочитать структуру Student из файла." << endl;
//            fl = 0;
//            fin.close();
//            continue; // Переходим к следующей итерации
//        }
//        fin.close();
//
//        int a = 0; // Локальная переменная
//        for (int i = 0; i < 4; i++) {
//            if (student.marks[i] == 4) a = 1;
//            if (student.marks[i] == 3) {
//                a = 2;
//                break;
//            }
//        }
//
//        ofstream fout("../../компсети3/x64/Debug/result2.bin", ios::binary | ios::out);
//        fout.write((char*)&a, sizeof(a));
//        fout.close();
//        if(fl)
//            cout << "сервер успешно обработал данные ученика с id=" <<student.surname << endl;
//    }
//
//    return 0;
//}
//int main()
//{
//    setlocale(LC_ALL, "Ru");
//    Student student;
//    ifstream fin;
//
//    while (1) {
//
//        fin.open("../../компсети2/x64/Debug/fileM2.bin", ios::binary);
//        //fin.read((char*)&student, sizeof(student));
//        long s1 = sizeOf("../../компсети2/x64/Debug/fileM2.bin");
//        long s2 = s1;
//        if (!fin.is_open()) {
//            cerr << "Error: Could not open file " << endl;
//            break; // Выходим, если не удалось открыть файл
//        }
//        fin.read((char*)&student, sizeof(student));
//        while (s2 == s1) {
//            s2 = s1;
//            s2 = sizeOf("../../компсети2/x64/Debug/fileM2.bin");
//
//        }
//        cout << fin.gcount() << " " << sizeof(student) << endl;
//        if (fin.gcount() != sizeof(student)) {
//            cerr << "Ошибка: Не удалось прочитать структуру Student из файла." << endl;
//            fin.close(); // Обязательно закрываем файл в случае ошибки
//            continue;      // Переходим к следующей итерации цикла (или выходим из цикла)
//        }
//        cout << 1 << endl;
//        fin.close();
//        ofstream fout("../../компсети3/x64/Debug/result2.bin", ios::binary | ios::out);
//        a = 0;
//        for (int i = 0; i < 4; i++) {
//            if (student.marks[i] == 4) a = 1;
//            if (student.marks[i] == 3) {
//                a = 2;
//                break;
//            }
//
//        }
//        fout.write((char*)&a, sizeof(a));
//        fout.close();
//        ofstream ofs;
//        ofs.open("../../компсети2/x64/Debug/fileM2.bin", ios::out | ios::trunc);
//        ofs.close();
//    }
//}


//TCP
//#include <iostream>
//#include <string>
//#include <vector>
//#include <thread>
//#include <sstream> // Для stringstream
//
//#ifdef _WIN32
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#pragma comment(lib, "ws2_32.lib")
//#else
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <unistd.h>
//#include <arpa/inet.h>
//#endif
//using namespace std;
//
//// Константы
//const int PORT = 12345; // Порт для прослушивания
//const int BUFFER_SIZE = 1024;
//
////struct imt
////{
////    double weight;
////    double height;
////    double res;
////
////    imt(double weight, double height)
////    {
////        this->weight = weight;
////        this->height = height;
////        res = weight / pow(height, 2);
////    }
////};
//const double USD_TO_RUB = 90.0;
//const double EUR_TO_RUB = 100.0;
//const double GBP_TO_RUB = 115.0;
//struct convert {
//    double amount;
//    string from;
//    string to;
//
//};
//
//// Функция для обработки соединения с клиентом
//void handleClient(int clientSocket) {
//    setlocale(LC_ALL, "Ru");
//    char buffer[BUFFER_SIZE];
//    int bytesReceived;
//
//    while ((bytesReceived = recv(clientSocket, buffer, BUFFER_SIZE, 0)) > 0) {
//        
//        buffer[bytesReceived] = '\0';
//        string s = buffer;
//
//        // Разбираем запрос:  "amount fromCurrency toCurrency"
//        stringstream ss(s);
//        convert request;
//        double res=0;
//        double sum = request.amount;
//        ss >> request.amount >> request.from >> request.to;
//        cout << "Получено от клиента: " << s << endl;
//        cout << "Сумма: " << sum << " Из: " << request.from << " В: " << request.to << endl;
//        if (request.from == "RUB" && request.to == "USD") { // Переводим из RUB в USD
//            res = request.amount / USD_TO_RUB; // Делим на курс
//        }
//        else if (request.from == "USD" && request.to == "RUB") { //Переводим из USD в RUB
//            res = request.amount * USD_TO_RUB;
//        }
//        cout << "Результат: " << res << endl;
//        string re = to_string(res);
//
//        // Отправляем ответ клиенту
//        send(clientSocket, re.c_str(), re.size(), 0);
//
//        // Если клиент отправил "exit", завершаем соединение
//        if (string(buffer) == "exit") {
//            break;
//        }
//    }
//
//    // Закрываем соединение
//#ifdef _WIN32
//    closesocket(clientSocket);
//#else
//    close(clientSocket);
//#endif
//    std::cout << "Соединение с клиентом завершено." << std::endl;
//}
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//#ifdef _WIN32
//    WSADATA wsaData;//
//    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
//        cerr << "WSAStartup failed." << std::endl;
//        return 1;
//    }
//#endif
//
//    // 1. Создание сокета
//    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
//    if (serverSocket == -1) {
//        cerr << "Не удалось создать сокет." << std::endl;
//        return 1;
//    }
//
//    // 2. Настройка адреса сервера
//    sockaddr_in serverAddress;
//    //struct sockaddr_in
//    //{
//    //    short sin_family; // адресное пространство
//    //    // (AF_INET для IPv4)
//    //    u_short sin_port; // порт
//    //    struct in_addr sin_addr; // IP-адрес
//    //    char sin_zero[8]; // хвост
//    //};
//
//    serverAddress.sin_family = AF_INET;
//    serverAddress.sin_addr.s_addr = INADDR_ANY; // Слушаем на всех интерфейсах
//    //При инициализации сокета в этой структуре необходимо указать IP - адрес, с которым будет работать данный сокет.Если сокет
//    //    будет работать с любым адресом(например, в случае приложениясервера, доступного из узлов с любым адресом), адрес для сокета
//    //    можно указать следующим образом :
//    //sockaddr_in sin;
//    //sin.sin_addr.s_addr = INADDR_ANY;
//    serverAddress.sin_port = htons(PORT); // Преобразуем порт в сетевой порядок байтов
//
//    // 3. Привязка сокета к адресу
//    //int bind(socket s, const struct sockaddr far *
//    //    name, int namelen);
//    //Первым аргументом передается дескриптор сокета, возвращенный функцией socket, за ним следуют указатель на структуру
//    //    sockaddr и ее длина.
//    //    В случае ошибки функция bind возвращает значение
//    //    SOCKET_ERROR.Анализ причин ошибки следует выполнять при
//    //    помощи функции WSAGetLastError.
//    if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) {
//        cerr << "Не удалось привязать сокет." << std::endl;
//        return 1;
//    }
//
//    // 4. Прослушивание входящих соединений
//    listen(serverSocket, 5); // Максимальная длина очереди подключений
//
//    std::cout << "Сервер слушает на порту " << PORT << std::endl;
//
//
//    // 5. Принятие входящих соединений (в бесконечном цикле)
//    while (true) {
//        sockaddr_in clientAddress;
//        socklen_t clientAddressLength = sizeof(clientAddress);
//        //Принятие соединения.Входящие соединения должны ожидать в очереди, пока их не примут.При успешной попытке соединения с сервером на порт, который слушает сервер, сведения о соединении попадают в очередь ожидающих принятия.Для принятия ожидающего соединения необходимо вызвать функцию
//        //    accept(), которая возвращает совершенно новый дескриптор сокета для этого конкретного соединения.В результате у нас есть и
//        //    первый сокет, который по - прежнему всё ещё слушает новые входящие соединения, и только что созданный сокет, готовый уже к
//        //    обмену данными с помощью send() и recv()!
//        //    Прототип функции выглядит так :
//        //int accept(int sockfd, struct sockaddr* addr,
//        //    socklen_t * addrlen);
//        //    sockfd – это слушающий сокет, addr – это обычно указатель на
//        //    локальную структуру sockaddr_storage.Чтобы не ограничиваться только IPv4 или только IPv6, часто в сетевом программировании используют как тип адресной структуры сокета структуру
//        //    sockaddr_storage, которой точно хватит для хранения обоих
//        //    типов протоколов.В этой структуре будет информация о входящем соединении.С её помощью можно узнать, кто именно и с каким исходящим портом соединялся с вами.addrlen – локальная
//        //    переменная, целое число, которое должно быть установлено в
//        //    sizeof(sockaddr_storage) перед передачей в accept().
//        // 6. Принимаем соединение
//        int clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddress, &clientAddressLength);
//        if (clientSocket < 0) {
//            cerr << "Не удалось принять соединение." << std::endl;
//            continue; // Переходим к следующей итерации цикла
//        }
//
//        // Выводим информацию о клиенте
//        char clientIp[INET_ADDRSTRLEN];
//        inet_ntop(AF_INET, &clientAddress.sin_addr, clientIp, INET_ADDRSTRLEN);
//        std::cout << "Принято соединение от: " << clientIp << ":" << ntohs(clientAddress.sin_port) << std::endl;
//
//        // Создаем новый поток для обработки клиента
//        std::thread clientThread(handleClient, clientSocket);
//        clientThread.detach(); // Отсоединяем поток, чтобы он работал независимо
//    }
//
//    // 7. Закрываем слушающий сокет (это никогда не произойдет в данном примере)
//#ifdef _WIN32
//    closesocket(serverSocket);
//    WSACleanup();
//#else
//    close(serverSocket);
//#endif
//
//    return 0;
//}



//TCP
//#include <iostream>
//#include <string>
//#include <vector>
//#include <thread>
//
//#ifdef _WIN32
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#pragma comment(lib, "ws2_32.lib")
//#else
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <unistd.h>
//#include <arpa/inet.h>
//#endif
//using namespace std;
//
//// Константы
//const int PORT = 12345; // Порт для прослушивания
//const int BUFFER_SIZE = 1024;
//
////struct imt
////{
////    double weight;
////    double height;
////    double res;
////
////    imt(double weight, double height)
////    {
////        this->weight = weight;
////        this->height = height;
////        res = weight / pow(height, 2);
////    }
////};
//const double USD_TO_RUB = 90.0;
//const double EUR_TO_RUB = 100.0;
//const double GBP_TO_RUB = 115.0;
//struct convert {
//    double amount;
//    //string from;
//    string to;
//    convert(double amount, string to) {
//        this->amount = amount;
//        this->to = to;
//    }
//};
//
//// Функция для обработки соединения с клиентом
//void handleClient(int clientSocket) {
//    setlocale(LC_ALL, "Ru");
//    char buffer[BUFFER_SIZE];
//    int bytesReceived;
//
//    while ((bytesReceived = recv(clientSocket, buffer, BUFFER_SIZE, 0)) > 0) {
//        buffer[bytesReceived] = '\0';
//        string s = buffer;
//        double amount = stod(s.substr(0, s.find(' ')));
//        //double from = stod(s.substr(s.find(' '), s.find(' ')));
//        string to = (s.substr(s.find(' '), s.size()));
//        cout << "Получено от клиента: " << s << std::endl;
//        //d.res = d.weight / pow(d.height, 2);
//        convert d(amount, to);
//        double r = amount;
//        cout << "сумма " << d.amount  <<" to " <<d.to << endl;
//        if (d.to == "USD") { // Переводим из RUB в USD
//            r = d.amount / USD_TO_RUB; // Делим на курс
//        }
//        else if (d.to == "RUB") { //Переводим из USD в RUB
//            r = d.amount * USD_TO_RUB;
//        }
//        cout << "Результат: " << r << endl;
//        string res = to_string(r);
//        cout << "result: " << res << endl;
//        // Отправляем ответ клиенту (эхо)
//        send(clientSocket, res.c_str(), res.size(), 0);
//
//        // Если клиент отправил "exit", завершаем соединение
//        if (string(buffer) == "exit") {
//            break;
//        }
//    }
//
//    // Закрываем соединение
//#ifdef _WIN32
//    closesocket(clientSocket);
//#else
//    close(clientSocket);
//#endif
//    std::cout << "Соединение с клиентом завершено." << std::endl;
//}
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//#ifdef _WIN32
//    WSADATA wsaData;//
//    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
//        cerr << "WSAStartup failed." << std::endl;
//        return 1;
//    }
//#endif
//
//    // 1. Создание сокета
//    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
//    if (serverSocket == -1) {
//        cerr << "Не удалось создать сокет." << std::endl;
//        return 1;
//    }
//
//    // 2. Настройка адреса сервера
//    sockaddr_in serverAddress;
//    //struct sockaddr_in
//    //{
//    //    short sin_family; // адресное пространство
//    //    // (AF_INET для IPv4)
//    //    u_short sin_port; // порт
//    //    struct in_addr sin_addr; // IP-адрес
//    //    char sin_zero[8]; // хвост
//    //};
//
//    serverAddress.sin_family = AF_INET;
//    serverAddress.sin_addr.s_addr = INADDR_ANY; // Слушаем на всех интерфейсах
//    //При инициализации сокета в этой структуре необходимо указать IP - адрес, с которым будет работать данный сокет.Если сокет
//    //    будет работать с любым адресом(например, в случае приложениясервера, доступного из узлов с любым адресом), адрес для сокета
//    //    можно указать следующим образом :
//    //sockaddr_in sin;
//    //sin.sin_addr.s_addr = INADDR_ANY;
//    serverAddress.sin_port = htons(PORT); // Преобразуем порт в сетевой порядок байтов
//
//    // 3. Привязка сокета к адресу
//    //int bind(socket s, const struct sockaddr far *
//    //    name, int namelen);
//    //Первым аргументом передается дескриптор сокета, возвращенный функцией socket, за ним следуют указатель на структуру
//    //    sockaddr и ее длина.
//    //    В случае ошибки функция bind возвращает значение
//    //    SOCKET_ERROR.Анализ причин ошибки следует выполнять при
//    //    помощи функции WSAGetLastError.
//    if (bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) {
//        cerr << "Не удалось привязать сокет." << std::endl;
//        return 1;
//    }
//
//    // 4. Прослушивание входящих соединений
//    listen(serverSocket, 5); // Максимальная длина очереди подключений
//
//    std::cout << "Сервер слушает на порту " << PORT << std::endl;
//
//
//    // 5. Принятие входящих соединений (в бесконечном цикле)
//    while (true) {
//        sockaddr_in clientAddress;
//        socklen_t clientAddressLength = sizeof(clientAddress);
//        //Принятие соединения.Входящие соединения должны ожидать в очереди, пока их не примут.При успешной попытке соединения с сервером на порт, который слушает сервер, сведения о соединении попадают в очередь ожидающих принятия.Для принятия ожидающего соединения необходимо вызвать функцию
//        //    accept(), которая возвращает совершенно новый дескриптор сокета для этого конкретного соединения.В результате у нас есть и
//        //    первый сокет, который по - прежнему всё ещё слушает новые входящие соединения, и только что созданный сокет, готовый уже к
//        //    обмену данными с помощью send() и recv()!
//        //    Прототип функции выглядит так :
//        //int accept(int sockfd, struct sockaddr* addr,
//        //    socklen_t * addrlen);
//        //    sockfd – это слушающий сокет, addr – это обычно указатель на
//        //    локальную структуру sockaddr_storage.Чтобы не ограничиваться только IPv4 или только IPv6, часто в сетевом программировании используют как тип адресной структуры сокета структуру
//        //    sockaddr_storage, которой точно хватит для хранения обоих
//        //    типов протоколов.В этой структуре будет информация о входящем соединении.С её помощью можно узнать, кто именно и с каким исходящим портом соединялся с вами.addrlen – локальная
//        //    переменная, целое число, которое должно быть установлено в
//        //    sizeof(sockaddr_storage) перед передачей в accept().
//        // 6. Принимаем соединение
//        int clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddress, &clientAddressLength);
//        if (clientSocket < 0) {
//            cerr << "Не удалось принять соединение." << std::endl;
//            continue; // Переходим к следующей итерации цикла
//        }
//
//        // Выводим информацию о клиенте
//        char clientIp[INET_ADDRSTRLEN];
//        inet_ntop(AF_INET, &clientAddress.sin_addr, clientIp, INET_ADDRSTRLEN);
//        std::cout << "Принято соединение от: " << clientIp << ":" << ntohs(clientAddress.sin_port) << std::endl;
//
//        // Создаем новый поток для обработки клиента
//        std::thread clientThread(handleClient, clientSocket);
//        clientThread.detach(); // Отсоединяем поток, чтобы он работал независимо
//    }
//
//    // 7. Закрываем слушающий сокет (это никогда не произойдет в данном примере)
//#ifdef _WIN32
//    closesocket(serverSocket);
//    WSACleanup();
//#else
//    close(serverSocket);
//#endif
//
//    return 0;
//}

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
//#include <iostream>
//#include <string>
//#include <vector>
//#include <thread>
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
//using namespace std;
//
//// Константы
//const int PORT = 12345; // Порт для прослушивания
//const int BUFFER_SIZE = 1024;
//
//
//const double USD_TO_RUB = 85.5;
//const double EUR_TO_RUB = 92.43;
//const double CNY_TO_RUB = 11.71;
//const double JPY_TO_RUB = 0.57;
//
//struct convert {
//    double amount;
//    string from;
//    string to;
//    double res;
//    convert(double amount,string from, string to) {
//        this->amount = amount;
//        this->from = from;
//        this->to = to;
//        res = -1.0;  // Инициализируем значением по умолчанию
//        if (from == "USD" && to == "RUB")
//            res = amount * USD_TO_RUB;
//        if (from == "USD" && to == "EUR")
//            res = amount * 0.93;
//        if (from == "USD" && to == "CNY")
//            res = amount * 7.26;
//        if (from == "USD" && to == "JPY")
//            res = amount * 149.91;
//        if (from == "RUB" && to == "USD")
//            res = amount *0.011696;
//        if (from == "RUB" && to == "EUR")
//            res = amount *0.010819;
//        if (from == "RUB" && to == "CNY")
//            res = amount *0.085371;
//        if (from == "RUB" && to == "JPY")
//            res = amount *1.75;
//        if (from == "EUR" && to == "RUB")
//            res = amount * 92.43;
//        if (from == "EUR" && to == "USD")
//            res = amount * 1.08;
//        if (from == "EUR" && to == "CNY")
//            res = amount * 7.84;
//        if (from == "EUR" && to == "JPY")
//            res = amount * 162.02;
//        if (from == "CNY" && to == "RUB")
//            res = amount * 11.71;
//        if (from == "CNY" && to == "USD")
//            res = amount * 0.14;
//        if (from == "CNY" && to == "EUR")
//            res = amount * 0.13;
//        if (from == "CNY" && to == "JPY")
//            res = amount * 10.67;
//        if (from == "JPY" && to == "RUB")
//            res = amount * 0.57;
//        if (from == "JPY" && to == "USD")
//            res = amount * 0.006668;
//        if (from == "JPY" && to == "EUR")
//            res = amount * 0.006169;
//        if (from == "JPY" && to == "CNY")
//            res = amount * 0.048381;
//    }
//};
//
//// Функция для обработки соединения с клиентом
//void handleClient(int clientSocket) {
//    setlocale(LC_ALL, "Ru");
//    char buffer[BUFFER_SIZE];
//    int bytesReceived;
//
//    while ((bytesReceived = recv(clientSocket, buffer, BUFFER_SIZE, 0)) > 0) {
//        buffer[bytesReceived] = '\0';
//        string s = buffer;
//        if (s == "exit") {
//            break; // Выходим из цикла
//        }
//        size_t firstSpace = s.find(' ');
//        double amount = stod(s.substr(0, firstSpace));
//        size_t secondSpace = s.find(' ', firstSpace + 1);
//        string from = (s.substr(firstSpace+1, secondSpace-firstSpace-1));
//        string to = (s.substr(secondSpace+1));
//        cout << "Получено от клиента: " << s << std::endl;
//        convert d(amount, from, to);
//        cout << "сумма " << d.amount <<" from " <<d.from << " to " << d.to << endl;
//        string r = to_string(d.res);
//        cout << "result: " << r << endl;
//        // Отправляем ответ клиенту (эхо)
//        send(clientSocket, r.c_str(), r.size(), 0);
//        memset(buffer, 0, BUFFER_SIZE);
//    }
//    closesocket(clientSocket);
//    std::cout << "Соединение с клиентом завершено." << std::endl;
//}
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//    char buff[1024];
//    if (WSAStartup(0x0202, (WSADATA*)&buff[0]))
//    {
//        cout << "Error WSAStartup \n" << WSAGetLastError();
//        // Ошибка!
//        return -1;
//    }
//
//    // 1. Создание сокета
//    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);
//    if (serverSocket == -1) {
//        cerr << "Не удалось создать сокет." << std::endl;
//        return 1;
//    }
//
//    // 2. Настройка адреса сервера
//    sockaddr_in serverAddress;
//    //struct sockaddr_in
//    //{
//    //    short sin_family; // адресное пространство
//    //    // (AF_INET для IPv4)
//    //    u_short sin_port; // порт
//    //    struct in_addr sin_addr; // IP-адрес
//    //    char sin_zero[8]; // хвост
//    //};
//
//    serverAddress.sin_family = AF_INET;
//    serverAddress.sin_addr.s_addr = INADDR_ANY; // Слушаем на всех интерфейсах
//    //При инициализации сокета в этой структуре необходимо указать IP - адрес, с которым будет работать данный сокет.Если сокет
//    //    будет работать с любым адресом(например, в случае приложениясервера, доступного из узлов с любым адресом), адрес для сокета
//    //    можно указать следующим образом :
//    //sockaddr_in sin;
//    //sin.sin_addr.s_addr = INADDR_ANY;
//    serverAddress.sin_port = htons(PORT); // Преобразуем порт в сетевой порядок байтов
//
//    // 3. Привязка сокета к адресу
//    //int bind(socket s, const struct sockaddr far *
//    //    name, int namelen);
//    //Первым аргументом передается дескриптор сокета, возвращенный функцией socket, за ним следуют указатель на структуру
//    //    sockaddr и ее длина.
//    //    В случае ошибки функция bind возвращает значение
//    //    SOCKET_ERROR.Анализ причин ошибки следует выполнять при
//    //    помощи функции WSAGetLastError.
//    if (bind(serverSocket, (sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) {
//        cerr << "Не удалось привязать сокет." << std::endl;
//        return 1;
//    }
//
//    // 4. Прослушивание входящих соединений
//    listen(serverSocket, 5); // Максимальная длина очереди подключений
//
//    std::cout << "Сервер слушает на порту " << PORT << std::endl;
//
//
//    // 5. Принятие входящих соединений (в бесконечном цикле)
//    while (true) {
//        sockaddr_in clientAddress;
//        socklen_t clientAddressLength = sizeof(clientAddress);
//        //Принятие соединения.Входящие соединения должны ожидать в очереди, пока их не примут.При успешной попытке соединения с сервером на порт, который слушает сервер, сведения о соединении попадают в очередь ожидающих принятия.Для принятия ожидающего соединения необходимо вызвать функцию
//        //    accept(), которая возвращает совершенно новый дескриптор сокета для этого конкретного соединения.В результате у нас есть и
//        //    первый сокет, который по - прежнему всё ещё слушает новые входящие соединения, и только что созданный сокет, готовый уже к
//        //    обмену данными с помощью send() и recv()!
//        //    Прототип функции выглядит так :
//        //int accept(int sockfd, struct sockaddr* addr,
//        //    socklen_t * addrlen);
//        //    sockfd – это слушающий сокет, addr – это обычно указатель на
//        //    локальную структуру sockaddr_storage.Чтобы не ограничиваться только IPv4 или только IPv6, часто в сетевом программировании используют как тип адресной структуры сокета структуру
//        //    sockaddr_storage, которой точно хватит для хранения обоих
//        //    типов протоколов.В этой структуре будет информация о входящем соединении.С её помощью можно узнать, кто именно и с каким исходящим портом соединялся с вами.addrlen – локальная
//        //    переменная, целое число, которое должно быть установлено в
//        //    sizeof(sockaddr_storage) перед передачей в accept().
//        // 6. Принимаем соединение
//        int clientSocket = accept(serverSocket, (sockaddr*)&clientAddress, &clientAddressLength);
//        if (clientSocket < 0) {
//            cerr << "Не удалось принять соединение." << std::endl;
//            continue; // Переходим к следующей итерации цикла
//        }
//
//        // Выводим информацию о клиенте
//        char clientIp[INET_ADDRSTRLEN];//гарантирует, что буфер будет достаточно большим, чтобы вместиь IPv4 адрес
//        inet_ntop(AF_INET, &clientAddress.sin_addr, clientIp, INET_ADDRSTRLEN);
//        std::cout << "Принято соединение от: " << clientIp << ":" << ntohs(clientAddress.sin_port) << std::endl;
//
//        // Создаем новый поток для обработки клиента
//        std::thread clientThread(handleClient, clientSocket);
//        clientThread.detach(); // Отсоединяем поток, чтобы он работал независимо
//    }
//    closesocket(serverSocket);
//    return 0;
//}
//


//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <vector>
//#include <thread>
//
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#pragma comment(lib, "ws2_32.lib")
//
//using namespace std;
//// Константы
//const int PORT = 12345; // Порт для прослушивания
//const int BUFFER_SIZE = 1024;
//
//
//int main() {
//    setlocale(LC_ALL, "Ru");
//    char buff[1024];
//    if (WSAStartup(0x0202, (WSADATA*)&buff[0]))
//    {
//        cout << "Error WSAStartup \n" << WSAGetLastError();
//        // Ошибка!
//        return -1;
//    }
//
//    // 1. Создание сокета
//    SOCKET serverSocket = socket(AF_INET, SOCK_DGRAM, 0);
//    if (serverSocket == INVALID_SOCKET) {
//        cerr << "Не удалось создать сокет." << std::endl;
//        return 1;
//    }
//
//    // 2. Настройка адреса сервера
//    sockaddr_in serverAddress;
//    //struct sockaddr_in
//    //{
//    //    short sin_family; // адресное пространство
//    //    // (AF_INET для IPv4)
//    //    u_short sin_port; // порт
//    //    struct in_addr sin_addr; // IP-адрес
//    //    char sin_zero[8]; // хвост
//    //};
//
//    serverAddress.sin_family = AF_INET;
//    serverAddress.sin_addr.s_addr = INADDR_ANY; // Слушаем на всех интерфейсах
//    //При инициализации сокета в этой структуре необходимо указать IP - адрес, с которым будет работать данный сокет.Если сокет
//    //    будет работать с любым адресом(например, в случае приложениясервера, доступного из узлов с любым адресом), адрес для сокета
//    //    можно указать следующим образом :
//    //sockaddr_in sin;
//    //sin.sin_addr.s_addr = INADDR_ANY;
//    serverAddress.sin_port = htons(PORT); // Преобразуем порт в сетевой порядок байтов
//
//    // 3. Привязка сокета к адресу
//    //int bind(socket s, const struct sockaddr far *
//    //    name, int namelen);
//    //Первым аргументом передается дескриптор сокета, возвращенный функцией socket, за ним следуют указатель на структуру
//    //    sockaddr и ее длина.
//    //    В случае ошибки функция bind возвращает значение
//    //    SOCKET_ERROR.Анализ причин ошибки следует выполнять при
//    //    помощи функции WSAGetLastError.
//    if (bind(serverSocket, (sockaddr*)&serverAddress, sizeof(serverAddress)) < 0) {
//        cerr << "Не удалось привязать сокет." << std::endl;
//        closesocket(serverSocket);
//        WSACleanup();
//        return -1;
//    }
//
//    // 4. Прослушивание входящих соединений
//    //listen(serverSocket, 5); // Максимальная длина очереди подключений
//
//    std::cout << "Сервер слушает на порту " << PORT << std::endl;
//
//
//    // 5. Принятие входящих соединений (в бесконечном цикле)
//    while (true) {
//        sockaddr_in clientAddress;
//        int ClAd_size = sizeof(clientAddress);
//        int bsize = recvfrom(serverSocket, &buff[0], sizeof(buff) - 1, 0, (sockaddr*)&clientAddress, &ClAd_size);
//        if (bsize == SOCKET_ERROR) //ошибка передачи
//            cout << "recvfrom() error:" << WSAGetLastError();
//        hostent* hst = gethostbyaddr((char*)&clientAddress.sin_addr, 4, AF_INET);
//        cout << "NEW DATAGRAM!\n" <<((hst) ? hst->h_name : "Unknown host") << "/n" << inet_ntoa(clientAddress.sin_addr) << "/n" <<ntohs(clientAddress.sin_port) << '\n';
//        buff[bsize] = '\0'; // добавление завершающего нуля
//        cout << "получено от клиента: " << buff << '\n'; // Вывод на экран
//        // посылка дейтаграммы клиенту
//        sendto(serverSocket, &buff[0], bsize, 0, (sockaddr*)&clientAddress,
//            sizeof(clientAddress));
//    }
//    return 0;
//}

// server_chat
//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <vector>
//#include <thread>
//
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#pragma comment(lib, "ws2_32.lib")
//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <winsock2.h>
//#include <windows.h>
//#include <string>
//#include <iostream>
//#include <map>
//#pragma comment(lib, "ws2_32.lib")
//#pragma warning(disable: 4996)
//using namespace std;
//SOCKET Connections[100];
////массив сокетов активных клиентов
//int Counter = 0; // число активных клиентов
//enum Packet { Pack, Test, Private };  // Добавили тип Private
//
//struct ClientInfo {
//	SOCKET socket;
//	string name;
//};
//
//// Используем map для хранения ClientInfo по индексу
//map<int, ClientInfo> clientInfoMap;
//
//// функционал потока отдельного клиента
//DWORD WINAPI ServerThread(LPVOID number)
//{
//    Packet packettype;
//    int index = ((int*)number)[0];
//    //cout << "socket number=" << index << endl;
//    SOCKET Con = Connections[index];
//    string clientName = clientInfoMap[index].name;
//
//    while (true)
//    {
//        // Проверяем соединение перед чтением
//        int result = recv(Con, (char*)&packettype, sizeof(Packet), NULL);
//
//        // Если клиент отключился
//        if (result == SOCKET_ERROR || result == 0)
//        {
//            int error = WSAGetLastError();
//            if (error == WSAECONNRESET || result == 0)
//            {
//                cout << "Client " << clientName << " disconnected" << endl;
//                break;
//            }
//            else
//            {
//                cout << "recv failed with error: " << error << endl;
//                break;
//            }
//        }
//
//        if (packettype == Pack)
//        {
//            cout << "received packet PACK" << endl;
//            int msg_size;
//            result = recv(Con, (char*)&msg_size, sizeof(int), NULL);
//
//            // Проверка на отключение клиента при получении размера сообщения
//            if (result == SOCKET_ERROR || result == 0)
//            {
//                cout << "Client " << clientName << " disconnected while receiving message size" << endl;
//                break;
//            }
//
//            char* msg = new char[msg_size + 1];
//            msg[msg_size] = 0;
//            result = recv(Con, msg, msg_size, NULL);
//
//            // Проверка на отключение клиента при получении сообщения
//            if (result == SOCKET_ERROR || result == 0)
//            {
//                cout << "Client " << clientName << " disconnected while receiving message" << endl;
//                delete[] msg;
//                break;
//            }
//
//            cout << msg << endl;
//            string fullMessage = clientName + ": " + msg;
//            int fullMessageSize = fullMessage.size();
//
//            // Отправка сообщения другим клиентам с проверкой их доступности
//            for (auto it = clientInfoMap.begin(); it != clientInfoMap.end(); )
//            {
//                int i = it->first;
//                SOCKET clientSocket = it->second.socket;
//
//                if (i == index)
//                {
//                    ++it;
//                    continue;
//                }
//
//                Packet msgtype = Pack;
//                int sendResult = send(clientSocket, (char*)&msgtype, sizeof(Packet), NULL);
//                if (sendResult == SOCKET_ERROR)
//                {
//                    cout << "Client " << it->second.name << " disconnected, removing from list" << endl;
//                    closesocket(clientSocket);
//                    it = clientInfoMap.erase(it);
//                    continue;
//                }
//
//                sendResult = send(clientSocket, (char*)&fullMessageSize, sizeof(int), NULL);
//                if (sendResult == SOCKET_ERROR)
//                {
//                    cout << "Client " << it->second.name << " disconnected, removing from list" << endl;
//                    closesocket(clientSocket);
//                    it = clientInfoMap.erase(it);
//                    continue;
//                }
//
//                sendResult = send(clientSocket, fullMessage.c_str(), fullMessageSize, NULL);
//                if (sendResult == SOCKET_ERROR)
//                {
//                    cout << "Client " << it->second.name << " disconnected, removing from list" << endl;
//                    closesocket(clientSocket);
//                    it = clientInfoMap.erase(it);
//                    continue;
//                }
//
//                ++it;
//            }
//            delete[] msg;
//        }
//        else if (packettype == Private) {
//            // Получаем имя получателя
//            int recipientNameSize;
//            recv(Con, (char*)&recipientNameSize, sizeof(int), NULL);
//            char* recipientName = new char[recipientNameSize + 1];
//            recipientName[recipientNameSize] = '\0';
//            recv(Con, recipientName, recipientNameSize, NULL);
//
//            // Получаем само сообщение
//            int msg_size;
//            recv(Con, (char*)&msg_size, sizeof(int), NULL);
//            char* msg = new char[msg_size + 1];
//            msg[msg_size] = '\0';
//            recv(Con, msg, msg_size, NULL);
//
//            // Формируем полное сообщение с указанием отправителя
//            string fullMessage = "[Private from " + clientName + "]: " + msg;
//
//            // Ищем получателя среди подключенных клиентов
//            bool recipientFound = false;
//            for (auto& pair : clientInfoMap) {
//                if (pair.second.name == recipientName) {
//                    Packet msgtype = Private;
//                    int fullMessageSize = fullMessage.size();
//
//                    send(pair.second.socket, (char*)&msgtype, sizeof(Packet), NULL);
//                    send(pair.second.socket, (char*)&fullMessageSize, sizeof(int), NULL);
//                    send(pair.second.socket, fullMessage.c_str(), fullMessageSize, NULL);
//
//                    recipientFound = true;
//                    break;
//                }
//            }
//
//            // Отправляем отправителю уведомление о доставке/недоставке
//            string notification;
//            if (recipientFound) {
//                notification = "Private message delivered to " + string(recipientName);
//            }
//            else {
//                notification = "User " + string(recipientName) + " not found or offline";
//            }
//
//            int notifSize = notification.size();
//            Packet notifType = Private;
//
//            send(Con, (char*)&notifType, sizeof(Packet), NULL);
//            send(Con, (char*)&notifSize, sizeof(int), NULL);
//            send(Con, notification.c_str(), notifSize, NULL);
//
//            delete[] recipientName;
//            delete[] msg;
//        }
//        else {
//            cout << "Unrecognized packet: " << packettype << endl;
//            break;
//        }
//    }
//
//    closesocket(Con);
//    clientInfoMap.erase(index);
//    cout << "Client " << clientName << " thread ended" << endl;
//    return 0;
//}
//int main() {
//	// Инициализация Winsock
//	WSAData wsaData;
//	WORD DLLVersion = MAKEWORD(2, 1);
//	if (WSAStartup(DLLVersion, &wsaData) != 0)
//	{
//		cout << "Error" << endl;
//		exit(1);
//	}
//	/* сохранение в слушающем сокете информации о сервере
//	*/
//	sockaddr_in addr;
//	int sizeofaddr = sizeof(addr);
//	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
//	addr.sin_port = htons(123);
//	addr.sin_family = AF_INET;
//	SOCKET sListen = socket(AF_INET, SOCK_STREAM, NULL);
//	bind(sListen, (SOCKADDR*)&addr, sizeof(addr));
//	// режим прослушивания, организация очереди
//	listen(sListen, 10);
//	SOCKET newConnection;
//	for (int i = 0; i < 100; i++)
//	{
//		// извлечение запросов из очереди
//		newConnection = accept(sListen, (SOCKADDR*)&addr,
//			&sizeofaddr);
//		if (newConnection == 0)
//		{
//			cout << "Error #2\n";
//		} //ошибка подключения
//		else
//		{
//			//приветствие нового подключившегося клиента
//			cout << "Client Connected!\n";
//
//			Packet packetType;
//			int nameSize;
//			recv(newConnection, (char*)&packetType, sizeof(Packet), NULL);
//
//			if (packetType == Pack) {
//				recv(newConnection, (char*)&nameSize, sizeof(int), NULL);
//				char* nameBuffer = new char[nameSize + 1];
//				nameBuffer[nameSize] = 0;
//				recv(newConnection, nameBuffer, nameSize, NULL);
//				string clientName(nameBuffer);
//				delete[] nameBuffer;
//
//				cout << "Client name: " << clientName << endl;
//
//				ClientInfo clientInfo;
//				clientInfo.socket = newConnection;
//				clientInfo.name = clientName;
//				clientInfoMap[i] = clientInfo;
//				string msg = "Welcome to chat, " + clientName + "!";
//				int msg_size = msg.size();
//				//передача клиенту пакета типа Pack
//				Packet msgtype = Pack;
//				send(newConnection, (char*)&msgtype, sizeof(Packet),
//					NULL);
//				send(newConnection, (char*)&msg_size, sizeof(int),
//					NULL);
//				send(newConnection, (char*)&msg[0], msg_size, NULL);
//				/* сохранение сокета клиента в массиве участников
//				чата */
//				Connections[i] = newConnection;
//				Counter++;
//				//количество участников увеличивается
//				cout << "count=" << Counter << endl;
//				// создание нового потока для обслуживания клиента
//				int* index = new int[1];
//				index[0] = i;
//				CreateThread(NULL, NULL, ServerThread, index, NULL, NULL);
//			}
//			else {
//				cout << "Error receiving client name.\n";
//				closesocket(newConnection);
//			}
//		}
//	}
//	closesocket(sListen);
//	WSACleanup();
//	return 0;
//}


//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <vector>
//#include <thread>
//#include <map> // Добавляем map для хранения имен клиентов
//
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#pragma comment(lib, "ws2_32.lib")
//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#include <winsock2.h>
//#include <windows.h>
//#include <string>
//#include <iostream>
//#pragma comment(lib, "ws2_32.lib")
//#pragma warning(disable: 4996)
//using namespace std;
//
//SOCKET Connections[100]; //массив сокетов активных клиентов
//int Counter = 0; // число активных клиентов
//enum Packet { Pack, Test };// допустимые типы пакетов
//
//// Добавляем структуру для хранения информации о клиенте
//struct ClientInfo {
//    SOCKET socket;
//    string name;
//};
//
//// Используем map для хранения ClientInfo по индексу
//map<int, ClientInfo> clientInfoMap;
//
//// функционал потока отдельного клиента
//DWORD WINAPI ServerThread(LPVOID number)
//{
//    Packet packettype;
//    // определение номера сокета клиента
//    int index = ((int*)number)[0];
//    cout << "socket number=" << index << endl;
//
//    // Получаем информацию о клиенте из map
//    SOCKET Con = clientInfoMap[index].socket;
//    string clientName = clientInfoMap[index].name;
//
//    // общение с клиентом:
//    while (true)
//    {
//        //получение информации от клиента
//        recv(Con, (char*)&packettype, sizeof(Packet), NULL);
//        // определение типа полученного пакета
//        if (packettype == Pack)
//        {
//            cout << "received packet PACK" << endl;
//            int msg_size;
//            // определение объема пакета
//            recv(Con, (char*)&msg_size, sizeof(int), NULL);
//            /* резервирование буфера нужного размера для принятия
//            пакета */
//            char* msg = new char[msg_size + 1];
//            msg[msg_size] = 0;
//            // получение пакета
//            recv(Con, msg, msg_size, NULL);
//            cout << msg << endl;
//
//            // Формируем сообщение с именем клиента
//            string fullMessage = clientName + ": " + msg;
//            int fullMessageSize = fullMessage.size();
//
//            /* передача полученного сообщения другим участникам
//            чата */
//            for (auto& pair : clientInfoMap)
//            {
//                int i = pair.first;
//                SOCKET clientSocket = pair.second.socket;
//
//                if (i == index) continue;
//
//                Packet msgtype = Pack;
//                /* передача типа, объема и содержания информационного
//                пакета */
//                send(clientSocket, (char*)&msgtype, sizeof(Packet), NULL);
//                send(clientSocket, (char*)&fullMessageSize, sizeof(int), NULL);
//                send(clientSocket, fullMessage.c_str(), fullMessageSize, NULL);
//            }
//            delete[] msg;
//        }
//        else
//        {
//            // получен неопознанный пакет!
//            cout << "Unrecognized packet: " << packettype << endl;
//            break;
//        }
//    }
//    closesocket(Con);
//    clientInfoMap.erase(index);  // Удаляем клиента из map при отключении
//    return 0;
//}
//
//int main() {
//    // Инициализация Winsock
//    WSAData wsaData;
//    WORD DLLVersion = MAKEWORD(2, 1);
//    if (WSAStartup(DLLVersion, &wsaData) != 0)
//    {
//        cout << "Error" << endl;
//        exit(1);
//    }
//    /* сохранение в слушающем сокете информации о сервере
//    */
//    sockaddr_in addr;
//    int sizeofaddr = sizeof(addr);
//    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
//    addr.sin_port = htons(123);
//    addr.sin_family = AF_INET;
//    SOCKET sListen = socket(AF_INET, SOCK_STREAM, NULL);
//    bind(sListen, (SOCKADDR*)&addr, sizeof(addr));
//    // режим прослушивания, организация очереди
//    listen(sListen, 10);
//    SOCKET newConnection;
//
//    for (int i = 0; i < 100; i++) // Увеличили до 100
//    {
//        // извлечение запросов из очереди
//        newConnection = accept(sListen, (SOCKADDR*)&addr, &sizeofaddr);
//
//        if (newConnection == 0)
//        {
//            cout << "Error #2\n";
//        } //ошибка подключения
//        else
//        {
//            //приветствие нового подключившегося клиента
//            cout << "Client Connected!\n";
//
//            // Получаем имя клиента
//            Packet packetType;
//            int nameSize;
//            recv(newConnection, (char*)&packetType, sizeof(Packet), NULL);
//
//            if (packetType == Pack) {
//                recv(newConnection, (char*)&nameSize, sizeof(int), NULL);
//                char* nameBuffer = new char[nameSize + 1];
//                nameBuffer[nameSize] = 0;
//                recv(newConnection, nameBuffer, nameSize, NULL);
//                string clientName(nameBuffer);
//                delete[] nameBuffer;
//
//                cout << "Client name: " << clientName << endl;
//
//                // Сохраняем информацию о клиенте
//                ClientInfo clientInfo;
//                clientInfo.socket = newConnection;
//                clientInfo.name = clientName;
//                clientInfoMap[i] = clientInfo; // используем map вместо массива
//
//                // Отправляем приветственное сообщение клиенту
//                string msg = "Welcome to chat, " + clientName + "!";
//                int msg_size = msg.size();
//                Packet msgtype = Pack;
//                send(newConnection, (char*)&msgtype, sizeof(Packet), NULL);
//                send(newConnection, (char*)&msg_size, sizeof(int), NULL);
//                send(newConnection, (char*)&msg[0], msg_size, NULL);
//
//                Connections[i] = newConnection;
//                Counter++;
//                cout << "count=" << Counter << endl;
//
//                // Создаем поток для обработки клиента
//                int* index = new int[1];
//                index[0] = i;
//                CreateThread(NULL, NULL, ServerThread, index, NULL, NULL);
//            }
//            else {
//                cout << "Error receiving client name.\n";
//                closesocket(newConnection);
//            }
//        }
//    }
//
//    closesocket(sListen);
//    WSACleanup();
//    return 0;
//}


#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <winsock2.h>
#include <windows.h>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#pragma comment(lib, "ws2_32.lib")
using namespace std;

SOCKET Connections[100];
int Counter = 0;

enum Packet { Pack, Test, Private, UserList, UserConnected, UserDisconnected };

struct ClientInfo {
    SOCKET socket;
    string name;
};

map<int, ClientInfo> clientInfoMap;

bool SendPacket(SOCKET socket, Packet type, const string& message) {
    int msg_size = message.size();

    if (send(socket, (char*)&type, sizeof(Packet), 0) == SOCKET_ERROR)
        return false;

    if (send(socket, (char*)&msg_size, sizeof(int), 0) == SOCKET_ERROR)
        return false;

    if (send(socket, message.c_str(), msg_size, 0) == SOCKET_ERROR)
        return false;

    return true;
}

void BroadcastUserConnected(const string& username) {
    for (auto& pair : clientInfoMap) {
        SendPacket(pair.second.socket, UserConnected, username);
    }
}

void BroadcastUserDisconnected(const string& username) {
    for (auto& pair : clientInfoMap) {
        SendPacket(pair.second.socket, UserDisconnected, username);
    }
}

void BroadcastUserList() {
    string userList;
    for (auto& pair : clientInfoMap) {
        if (!userList.empty()) userList += ",";
        userList += pair.second.name;
    }
    for (auto& pair : clientInfoMap) {
        SendPacket(pair.second.socket, UserList, userList);
    }
}

DWORD WINAPI ServerThread(LPVOID lpParam) {
    int index = *(int*)lpParam;
    SOCKET clientSocket = Connections[index];
    string clientName = clientInfoMap[index].name;

    Packet packetType;
    while (true) {
        int result = recv(clientSocket, (char*)&packetType, sizeof(Packet), 0);
        if (result <= 0) {
            cout << "Client " << clientName << " disconnected" << endl;
            break;
        }

        int msg_size;
        result = recv(clientSocket, (char*)&msg_size, sizeof(int), 0);
        if (result <= 0) break;

        char* msg = new char[msg_size + 1];
        msg[msg_size] = '\0';
        result = recv(clientSocket, msg, msg_size, 0);
        if (result <= 0) {
            delete[] msg;
            break;
        }

        string message(msg);
        delete[] msg;

        switch (packetType) {
        case Pack: {
            string fullMsg = clientName + ": " + message;
            for (auto& pair : clientInfoMap) {
                if (pair.first != index) {
                    SendPacket(pair.second.socket, Pack, fullMsg);
                }
            }
            break;
        }
        case Private: {
            size_t pos = message.find('|');
            if (pos != string::npos) {
                string recipient = message.substr(0, pos);
                string privateMsg = message.substr(pos + 1);

                bool found = false;
                for (auto& pair : clientInfoMap) {
                    if (pair.second.name == recipient) {
                        string fullMsg = "[Private from " + clientName + "]: " + privateMsg;
                        SendPacket(pair.second.socket, Private, fullMsg);
                        found = true;
                        break;
                    }
                }

                string status = found ? "Delivered to " + recipient : "User " + recipient + " not found";
                SendPacket(clientSocket, Private, status);
            }
            break;
        }
        default:
            cout << "Unknown packet type: " << packetType << endl;
        }
    }

    closesocket(clientSocket);
    Connections[index] = 0;
    clientInfoMap.erase(index);
    Counter--;
    BroadcastUserDisconnected(clientName);
    BroadcastUserList();
    delete (int*)lpParam;
    return 0;
}
int main() {
    WSAData wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        cerr << "WSAStartup failed" << endl;
        return 1;
    }

    SOCKET sListen = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sListen == INVALID_SOCKET) {
        cerr << "Socket creation failed" << endl;
        WSACleanup();
        return 1;
    }

    sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    addr.sin_port = htons(123);

    if (bind(sListen, (SOCKADDR*)&addr, sizeof(addr)) == SOCKET_ERROR) {
        cerr << "Bind failed" << endl;
        closesocket(sListen);
        WSACleanup();
        return 1;
    }

    listen(sListen, SOMAXCONN);
    cout << "Server started. Waiting for connections..." << endl;

    while (true) {
        sockaddr_in clientAddr;
        int clientAddrSize = sizeof(clientAddr);
        SOCKET newConnection = accept(sListen, (SOCKADDR*)&clientAddr, &clientAddrSize);

        if (newConnection == INVALID_SOCKET) {
            cerr << "Accept failed" << endl;
            continue;
        }

        Packet packetType;
        int bytesReceived = recv(newConnection, (char*)&packetType, sizeof(Packet), 0);
        if (bytesReceived <= 0 || packetType != Pack) {
            closesocket(newConnection);
            continue;
        }

        int nameSize;
        recv(newConnection, (char*)&nameSize, sizeof(int), 0);

        char* nameBuffer = new char[nameSize + 1];
        nameBuffer[nameSize] = '\0';
        recv(newConnection, nameBuffer, nameSize, 0);
        string clientName(nameBuffer);
        delete[] nameBuffer;

        int index = -1;
        for (int i = 0; i < 100; i++) {
            if (Connections[i] == 0) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            SendPacket(newConnection, Pack, "Server is full");
            closesocket(newConnection);
            continue;
        }

        Connections[index] = newConnection;
        ClientInfo clientInfo;
        clientInfo.socket = newConnection;
        clientInfo.name = clientName;
        clientInfoMap[index] = clientInfo;
        Counter++;

        cout << "Client #" << index << " (" << clientName << ") connected" << endl;
        SendPacket(newConnection, Pack, "Welcome to chat, " + clientName + "!");

        BroadcastUserConnected(clientName);
        BroadcastUserList();

        int* clientIndex = new int(index);
        CreateThread(NULL, NULL, ServerThread, clientIndex, NULL, NULL);
    }

    closesocket(sListen);
    WSACleanup();
    return 0;
}