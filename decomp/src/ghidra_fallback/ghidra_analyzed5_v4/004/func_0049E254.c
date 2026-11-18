#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int DAT_0049e39c;

// USA 0049E254 <- EU 0049E22C (Ghidra, non-matching)
// GLOBAL DAT_0049e39c int

int func_0049E254(int param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define local_38 (*(undefined1 * *)(albw_frame + 0x8))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  iVar7 = param_1 + 4;
  func_0010C0B8(iVar7);
  iVar3 = DAT_0049e39c;
  iVar5 = *(int *)(param_1 + 0x48);
  do {
    if (iVar5 == param_1 + 0x44) {
      func_0010EEE0(iVar7);
      return 0;
    }
    iVar6 = *(int *)(iVar5 + 8);
    if ((*(char *)(iVar6 + 0x60) == '\x04') && (cVar1 = *(char *)(iVar6 + 100), cVar1 == *param_2))
    {
      if (cVar1 == '\x01') {
        if (*(int *)(iVar6 + 0x68) == *(int *)(param_2 + 4)) {
LAB_0049e34c:
          func_0010EEE0(iVar7);
          return iVar6;
        }
      }
      else if (cVar1 == '\x02') {
        if (*(int *)(iVar6 + 0x68) == *(int *)(param_2 + 4)) goto LAB_0049e34c;
      }
      else if (cVar1 == '\x03') {
        local_2c = *(int *)(iVar6 + 0x68);
        local_30 = iVar3;
        local_3c = *(int *)(param_2 + 4);
        local_40 = iVar3;
        local_38 = (undefined1 *)&local_40;
        (**(code **)(iVar3 + 8))(&local_30);
        (**(code **)(local_30 + 8))(&local_30);
        iVar4 = local_2c;
        (**(code **)(local_40 + 8))(local_38);
        if (iVar4 == local_3c) {
LAB_0049e31c:
          bVar2 = true;
        }
        else {
          iVar4 = 0;
          do {
            if (*(char *)(local_2c + iVar4) != *(char *)(local_3c + iVar4)) break;
            if (*(char *)(local_2c + iVar4) == '\0') goto LAB_0049e31c;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x40001);
          bVar2 = false;
        }
        if (bVar2) goto LAB_0049e34c;
      }
    }
    iVar5 = *(int *)(iVar5 + 4);
  } while( true );
}

