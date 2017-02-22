#include "Tester_Catch.h"
#include "mock_checkbuttonpressed.h"


TEST_CASE( "Check if SPACE changes statusOfIncrementLoop", "[checkButtonPressed]" ) {

CheckButtonPressed pressTest;

keybd_event(0x20, 0, 0, 0);
keybd_event(0x20, 0, KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getStatusOfLoop() == true);

keybd_event(0x20, 0, 0, 0);
keybd_event(0x20, 0, KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getStatusOfLoop() == false);
}

TEST_CASE( "check button pressed ESC OFF", "[checkButtonPressed]" ) {

Mock_checkbuttonpressed pressTest;

CHECK(pressTest.exit == false);

}

TEST_CASE( "check button pressed ESC ON", "[checkButtonPressed]" ) {

Mock_checkbuttonpressed pressTest;

keybd_event(0x1b, 0, 0, 0);
keybd_event(0x1b, 0, KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.exit == true);

}

TEST_CASE( "check button pressed ADD", "[checkButtonPressed]" ) {

CheckButtonPressed pressTest;

keybd_event(VK_ADD, 0, KEYEVENTF_EXTENDEDKEY, 0);
keybd_event(VK_ADD, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getHowManySec() == 2);


keybd_event(VK_ADD, 0, KEYEVENTF_EXTENDEDKEY, 0);
keybd_event(VK_ADD, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getHowManySec() == 4);


keybd_event(VK_ADD, 0, KEYEVENTF_EXTENDEDKEY, 0);
keybd_event(VK_ADD, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getHowManySec() == 8);

}

TEST_CASE( "check button pressed SUBTRACT", "[checkButtonPressed]" ) {

CheckButtonPressed pressTest;

keybd_event(VK_SUBTRACT, 0, KEYEVENTF_EXTENDEDKEY, 0);
keybd_event(VK_SUBTRACT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getHowManySec() == 0.5);


keybd_event(VK_SUBTRACT, 0, KEYEVENTF_EXTENDEDKEY, 0);
keybd_event(VK_SUBTRACT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getHowManySec() == 0.25);


keybd_event(VK_SUBTRACT, 0, KEYEVENTF_EXTENDEDKEY, 0);
keybd_event(VK_SUBTRACT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
pressTest.checkStatusOfButtonPressed();

CHECK(pressTest.getHowManySec() == 0.125);

}
