#include <QCoreApplication>
#include <PhoneCheck.h>

int main(int argc, char *argv[]) {

    QCoreApplication a(argc, argv);

    try {

        PhoneCheck phone(22,2123123);

        std::cout << "(" << phone.getDdd() << ")" << ( phone.getPhone() ) << std::endl;

    } catch ( std::string notification ) {
        std::cout << notification << std::endl;
    }

    return a.exec();
}
