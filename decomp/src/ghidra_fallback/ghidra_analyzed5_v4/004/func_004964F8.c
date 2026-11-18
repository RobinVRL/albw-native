#include "ghidra_types.h"

extern int func_005FF018(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11);
extern int func_005FF5DC(uint param_1);
extern int func_005FFC18(void);
extern int func_006005BC(int param_1,undefined4 *param_2);
extern int DAT_004965f8;
extern int DAT_004965fc;
extern int DAT_00496600;
extern int DAT_00496604;
extern int DAT_00496608;
extern int DAT_0049660c;
extern int DAT_00496610;

// USA 004964F8 <- EU 004964D0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:8 undefined8
// GLOBAL DAT_004965f8 int
// GLOBAL DAT_004965fc int
// GLOBAL DAT_00496600 int
// GLOBAL DAT_00496604 int
// GLOBAL DAT_00496608 int
// GLOBAL DAT_0049660c int
// GLOBAL DAT_00496610 int

undefined4 func_004964F8(uint param_1,int *param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 ((int *)(albw_frame + 0x18))
  func_005FF5DC(param_1);
  func_006005BC(0x600,&iStack_30);
  func_006005BC(DAT_004965f8,&local_2c);
  func_006005BC(DAT_004965fc,local_28);
  func_006005BC(DAT_00496600,&local_34);
  cVar1 = (char)param_2[1];
  if ((cVar1 == '\0') || ((cVar1 != '\x02' && cVar1 != '\x03') && cVar1 != '\x04')) {
    iVar2 = 4;
  }
  else {
    iVar2 = 2;
  }
  iVar5 = param_2[2];
  iVar6 = *param_2;
  iVar3 = param_2[3] - local_34;
  func_005FFC18();
  cVar1 = (char)param_2[1];
  if (*(char *)((int)param_2 + 5) == '\0') {
    iVar4 = 8;
  }
  else {
    iVar4 = 0x20;
  }
  iVar7 = DAT_00496604;
  if ((((cVar1 != '\0') && (iVar7 = DAT_00496608, cVar1 != '\x02')) &&
      (iVar7 = DAT_0049660c, cVar1 != '\x03')) && (iVar7 = DAT_00496610, cVar1 != '\x04')) {
    iVar7 = 0;
  }
  return func_005FF018((iVar5 * (iVar3 - param_4) + param_3) * iVar2 + iVar6,param_2[2],param_2[3],iVar7,
                iStack_30,local_28[0],local_34,local_2c,(int)param_5,
                (int)((ulonglong)param_5 >> 0x20),iVar4);
}

