#include "ghidra_types.h"

extern float func_004D7FBC(float *param_1,float *param_2,uint param_3,uint param_4,float fparam_0);
extern float func_005548EC(int param_1,int param_2);
extern int func_0066FA50(int param_1,float *param_2,int param_3,uint param_4,float fparam_0);
extern int func_00670D14(int param_1,float *param_2,int param_3,uint param_4,float fparam_0);
extern undefined4 DAT_0034e00c;
extern int *DAT_0034e010;

// USA 0034DF14 <- EU 0034DEF0 (Ghidra, non-matching)
// GLOBAL DAT_0034e00c undefined4
// GLOBAL DAT_0034e010 int *

void func_0034DF14(int param_1,float *param_2,int param_3,int param_4,float fparam_0)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x26a) = 2;
    *(undefined2 *)(param_1 + 0x268) = 0;
    func_004D7FBC(param_2,param_2 + 3,*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),fparam_0);
  }
  else if (param_4 == 0) {
    func_0066FA50(param_1,param_2,param_3,0,fparam_0);
  }
  else {
    func_00670D14(param_1,param_2,param_3,0,fparam_0);
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar2 = *(int *)(param_1 + 0x90);
    if ((*(char *)(iVar2 + 0x24) != '\0') &&
       ((*(char *)(param_1 + 0x133) == '\0' || (*(char *)(*DAT_0034e010 + 0x95) == '\0')))) {
      bVar3 = *(int *)(param_1 + 0x264) != 0;
      cVar1 = '\0';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x250);
      }
      if (!bVar3 || cVar1 == '\0') {
        fVar4 = func_005548EC(param_1,1);
        fVar4 = fVar4 + *(float *)(iVar2 + 0x18) + *(float *)(param_1 + 0x104);
        if (*(char *)(param_1 + 0x24a) == '\0') {
          if (fVar4 <= param_2[1]) {
            param_2[1] = fVar4;
            *(undefined1 *)(param_1 + 0x24a) = 1;
            return;
          }
        }
        else if (param_2[4] < fVar4) {
          param_2[1] = fVar4;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x100) = DAT_0034e00c;
  }
  return;
}

