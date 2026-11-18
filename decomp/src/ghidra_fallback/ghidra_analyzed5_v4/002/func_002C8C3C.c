#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00556914(int param_1);
extern int func_00663578(undefined4 *param_1,undefined1 param_2);
extern int DAT_002c8d48;
extern int *DAT_002c8d78;
extern char s_SE_SwitchCandle_BURN_002c8d4c[];
extern char s_SE_SwitchCandle_OFF_002c8d64[];

// USA 002C8C3C <- EU 002C8C18 (Ghidra, non-matching)
// GLOBAL DAT_002c8d48 int
// GLOBAL DAT_002c8d78 int *
// GLOBAL s_SE_SwitchCandle_BURN_002c8d4c string
// GLOBAL s_SE_SwitchCandle_OFF_002c8d64 string

undefined4 func_002C8C3C(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_002c8d48;
  bVar4 = *(short *)((int)param_1 + 0x2e) == 2;
  if (!bVar4) {
    param_2 = *(int *)(param_2 + 0x2c);
  }
  if (bVar4 || param_2 == 0) {
    return 0;
  }
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 != '\x01' && cVar1 != '\r') {
    if (cVar1 != '\x03') {
      if ((cVar1 == '\v' || cVar1 == '\x0f') || (cVar1 == '\x0e' || cVar1 == '\x02')) {
        cVar1 = (char)param_1[0x11e];
      }
      else {
        if (cVar1 != '\x05') {
          return 0;
        }
        iVar3 = func_00556914(*DAT_002c8d78);
        if (iVar3 != 0) {
          return 0;
        }
        cVar1 = (char)param_1[0x11e];
      }
      if (cVar1 == '\0') {
        return 0;
      }
      func_00663578(param_1 + 0x103,0);
      local_1c = s_SE_SwitchCandle_OFF_002c8d64;
      local_20 = iVar2;
      func_00150A84(param_1,&local_20,0);
      return 0;
    }
    if (*(char *)(param_2 + 3) != '\x01') {
      return 0;
    }
  }
  if ((char)param_1[0x11e] == '\0') {
    func_00663578(param_1 + 0x103,1);
    local_1c = s_SE_SwitchCandle_BURN_002c8d4c;
    local_20 = iVar2;
    func_00150A84(param_1,&local_20,0);
  }
  else {
    param_1[0x103] = 0;
  }
  return 0;
}

