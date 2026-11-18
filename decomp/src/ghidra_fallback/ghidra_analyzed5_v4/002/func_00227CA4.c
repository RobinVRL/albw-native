#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0022671C(int *param_1);
extern int func_00226880(int *param_1);
extern int func_00226D70(int *param_1);
extern int func_002B1510(int param_1,float *param_2,float fparam_0);
extern int func_0034CA24(undefined4 *param_1);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern float DAT_00227eac;

// USA 00227CA4 <- EU 00227CA4 (Ghidra, non-matching)
// GLOBAL DAT_00227eac float

void func_00227CA4(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fparam_0;
  
  fparam_0 = DAT_00227eac;
  iVar2 = 0;
  bVar3 = *(char *)((int)param_1 + 0x752) == '\x01';
  if (bVar3) {
    *(undefined1 *)((int)param_1 + 0x752) = 0;
  }
  if ((bVar3 && (char)param_1[0x1cf] == '\0') &&
     ((char)param_1[0x11b] == '\x04' || (char)param_1[0x11b] == '\x05')) {
    func_0065E774(param_1 + 0x11a,6);
    param_1[0x1c0] = (int)ALBW_AS_U32(fparam_0);
    return;
  }
  if ((char)param_1[0x1d2] != '\0') {
    if ((char)param_1[0x1cf] == '\0') {
      cVar1 = (char)param_1[0x11b];
      if (((cVar1 == '\x04' || cVar1 == '\x05') ||
          ((cVar1 == '\a' || cVar1 == '\t') || cVar1 == '\x06')) ||
         ((cVar1 == '\f' && (0 < param_1[0x1b5])))) {
        *(undefined1 *)((int)param_1 + 0x747) = 10;
        param_1[0x1b5] = param_1[0x1b5] - (uint)*(byte *)(param_1 + 0x1d2);
        func_0065E774(param_1 + 0x11a,0xc);
        func_002B1510((int)param_1,(float *)(param_1[0x182] + 4),fparam_0);
        iVar2 = 1;
      }
    }
    else {
      iVar2 = func_00226880(param_1);
    }
    *(undefined1 *)(param_1 + 0x1d2) = 0;
    if (iVar2 != 0) {
      return;
    }
  }
  if (((((char)param_1[0x1cf] == '\0') &&
       ((((cVar1 = (char)param_1[0x11b], cVar1 == '\r' || (cVar1 == '\x05' || cVar1 == '\x04')) ||
         ((cVar1 == '\a' || cVar1 == '\t') || cVar1 == '\b')) ||
        ((cVar1 == '\f' && (0 < param_1[0x1b5])))))) && (iVar2 = func_0022671C(param_1), iVar2 == 1)
      ) || (cVar1 = (char)param_1[0x11b], (cVar1 != '\x04' && cVar1 != '\a') && cVar1 != '\x05')) {
    *(undefined1 *)(param_1 + 0x1d4) = 0;
  }
  else {
    func_00226D70(param_1);
  }
  if ((char)param_1[0x11b] == '\x0f' || (char)param_1[0x11b] == '\x10') {
    func_0034CA24((undefined4 *)param_1[0x10d]);
    func_0014E2A0((int)param_1,param_1[0x166],param_1 + 0x109,0x1000,0,0);
  }
  if (*(char *)((int)param_1 + 0x745) != '\0') {
    *(char *)((int)param_1 + 0x745) = *(char *)((int)param_1 + 0x745) + -1;
  }
  return;
}

