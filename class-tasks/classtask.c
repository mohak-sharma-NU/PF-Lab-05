#include<stdio.h>

int main(){
	int sypmtom;
	
	printf("1.Laptop\n2.Smartphone\n3.Router\n Enter your device type: ");
	int devicetype;
	scanf("%d",&devicetype);
	
	switch (devicetype){
		case 1:
			printf("\nFor Laptop, Following are possible problems:\n10 for Wont turn on.\n11 for Overheating\n12 for Slow performance.\n");
		
			scanf("%d",&sypmtom);
			
			switch (sypmtom){
				case 10:
					printf("Check power adapter and battery connections. \nTry a different power outlet. \nRemove battery and hold power button for 30 seconds.\n");
					break;
				case 11:
					printf("Clean fans and ensure proper ventilation. \nCheck for dust accumulation. \nUse a cooling pad. \nMonitor CPU usage.\n");
					break;
				case 12:
					printf("Run system diagnostics and check resource usage. \nScan for malware. \nUpgrade RAM if necessary. \nDefragment hard drive.\n");
					break;
				default:
					printf("Please Enter a valid number");
					break;
			}
			break;
		case 2:
			printf("\nFor SmartPhone, Following are possible problems:\n20 for Battery drains fast.\n21 for No signal\n22 for Touchscreen unreponsive.\n");

			switch (sypmtom){
				case 20:
					printf("Run battery calibration tool and check for background apps. \nReduce screen brightness. \nDisable unnecessary connectivity\n");
					break;
				case 21:
					printf("Check SIM card and network settings. \nToggle airplane mode. \nUpdate carrier settings. \nCheck for network outages.\n");
					break;
				case 22:
					printf("Perform screen calibration test. \nClean screen surface. \nRestart device. \nCheck for software updates.\n");
					break;
				default:
					printf("Please Enter a valid number");
					break;
			}
			break;
		case 3:
			printf("\nFor SmartPhone, Following are possible problems:\n30 for No internet check\n31 for Weak Signal\n32 Device can't connect \n");
		
			switch (sypmtom){
				case 30:
					printf("Check ISP status and router cables. \nRestart modem and router. \nCheck WAN connection settings. \nVerify internet subscription.\n");
					break;
				case 31:
					printf("Reposition router and check antenna connections. \nReduce interference from other devices. \nChange Wi-Fi channel. \nConsider range \n");
					break;
				case 32:
					printf("Check MAC filtering and DHCP settings. \nVerify Wi-Fi password. \nRestart connecting device. \nCheck for IP\n");
					break;
				default:
					printf("Please Enter a valid number");
					break;
			}
			break;		
		default:
			printf("Enter a valid device code.");
			break;
	}
}
