#include "ghidra_types.h"

extern int func_00428AB4(int *param_1,undefined1 param_2);
extern int func_00487F34(int param_1,int *param_2);
extern int func_00488234(undefined4 *param_1,uint param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0046eb08;
extern int DAT_0046eb18;
extern int *DAT_0046eb28;
extern char s_ExtraName_0046eb1c[];
extern char s_FairyBig_0046eb0c[];

// USA 0046EA7C <- EU 0046EA54 (Ghidra, non-matching)
// GLOBAL DAT_0046eb08 int
// GLOBAL DAT_0046eb18 int
// GLOBAL DAT_0046eb28 int *
// GLOBAL s_ExtraName_0046eb1c string
// GLOBAL s_FairyBig_0046eb0c string

int * func_0046EA7C(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  #define local_10 (*(int *)(albw_frame + 0x20))
  #define pcStack_c (*(char * *)(albw_frame + 0x24))
  piVar1 = (int *)func_00488234(param_1,7);
  iVar2 = DAT_0046eb08;
  piVar1[0xe] = DAT_0046eb08 + 0xac;
  *piVar1 = iVar2;
  local_28[2] = 0;
  local_28[3] = 0xffffffff;
  local_28[0] = 0;
  local_28[1] = 0;
  local_10 = DAT_0046eb18;
  pcStack_c = s_FairyBig_0046eb0c;
  local_28[4] = DAT_0046eb18;
  local_14 = s_ExtraName_0046eb1c;
  iVar2 = func_005826A4(*DAT_0046eb28,local_28,local_28 + 4,&local_10);
  if (iVar2 == 0) {
    iVar2 = piVar1[0x53];
    if (iVar2 != 0) {
      if ((*(byte *)(iVar2 + 0x44) & 1) != 0) {
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      }
      func_00428AB4(piVar1 + 0x1d,0);
    }
  }
  else {
    func_00487F34((int)piVar1,local_28);
  }
  return piVar1;
}

