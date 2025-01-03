#include <stdio.h>

int main() {
  float Total, share_amount, Application, allotment, Call, on_app, on_all, on_call;
  printf("enter total share amount\n");
    scanf("%f", &Total);
  printf("enter share amount\n");
    scanf("%f", &share_amount);
printf("enter amount of application\n");
    scanf("%f", &Application);
  printf("enter amount of Allotment\n");
    scanf("%f", &allotment);  
printf("enter amount on Calls\n");
    scanf("%f", &Call);  
    on_app = Total * Application;
printf("\nBANK AC deb == %f \n", on_app);
printf("      to   Application AC Cr. == %f \n", on_app);
printf("\nApplication AC deb == %f \n", on_app);
printf("      to   Share Capital AC Cr. == %f \n", on_app);
on_all = allotment * share_amount;
printf("\nAllotment AC deb == %f \n", on_all);
printf("      to   Share Capital AC Cr. == %f \n", on_all);
printf("\nBANK AC deb == %f \n", on_all);
printf("      to   Allotment AC Cr. == %f \n", on_all);
on_call = Call * share_amount;
printf("\nI and II call AC deb == %f \n", on_call);
printf("       to  Share Capital AC Cr. == %f \n", on_call);
printf("\nBANK AC deb == %f \n", on_call);
printf("       to  I and II call AC Cr. == %f \n", on_call);
      return 0;
}
