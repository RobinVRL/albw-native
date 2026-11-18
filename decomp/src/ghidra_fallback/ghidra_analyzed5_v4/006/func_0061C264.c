#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004C10C4(int param_1,float *param_2,uint param_3,int param_4,float fparam_0,float fparam_1);
extern int func_004C1300(int param_1);
extern int func_004C1388(int param_1);
extern int func_00520FC0(void);
extern int func_00583B1C(int param_1);
extern int func_0061C0A4(int param_1,int param_2,undefined1 param_3);
extern int *DAT_0061c42c;
extern float DAT_0061c430;
extern float DAT_0061c434;

// USA 0061C264 <- EU 0061C23C (Ghidra, non-matching)
// GLOBAL DAT_0061c42c int *
// GLOBAL DAT_0061c430 float
// GLOBAL DAT_0061c434 float

undefined4 func_0061C264(int *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float fparam_0;
  float fparam_1;
  
  func_004C1300((int)param_1);
  piVar2 = DAT_0061c42c;
  if (*(char *)((int)param_1 + 0x857) == '\0') {
    if (*(char *)((int)param_1 + 0x911) != -1) {
      if (*(char *)((int)param_1 + 0x852) == *(char *)((int)param_1 + 0x911)) {
        if (*(char *)(*(int *)(param_1[0x1eb] + 0x14) + 0x1c) == '\0') {
          iVar3 = func_00583B1C((int)param_1);
          if (iVar3 == 0) {
            return 1;
          }
        }
        else if (*(int *)(*(int *)(param_1[0x1eb] + 0x14) + 0x18) <=
                 (int)(uint)*(ushort *)(param_1 + 0x214)) {
          return 1;
        }
        uVar4 = func_00111A64((uint *)(*piVar2 + 0x660));
        *(short *)(param_1 + 0x214) = (short)((ulonglong)uVar4 * 300 >> 0x20) + 100;
        (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x853),0xffffffff);
      }
      else {
        fparam_0 = DAT_0061c430;
        fparam_1 = DAT_0061c434;
        pfVar5 = (float *)func_00520FC0();
        iVar3 = func_004C10C4((int)param_1,pfVar5,0x80000000,param_1[0xfa],fparam_0,fparam_1);
        if (iVar3 == 0) {
          if ((short)param_1[0x214] == 0) {
            if (*(char *)(*(int *)(param_1[0x1eb] + 0x14) + 0x1c) != '\0') {
              uVar4 = func_00111A64((uint *)(*piVar2 + 0x660));
              *(short *)(param_1 + 0x214) = (short)((ulonglong)uVar4 * 2 >> 0x20);
            }
            (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x911),0xffffffff)
            ;
          }
          else {
            *(short *)(param_1 + 0x214) = (short)param_1[0x214] + -1;
          }
        }
      }
    }
  }
  else {
    iVar3 = func_004C1388((int)param_1);
    if (iVar3 == 0) {
      if (*(short *)((int)param_1 + 0x84a) == 0) {
        if ((char)param_1[0x245] == '\0') {
          *(undefined2 *)(param_1 + 0x212) = 0;
        }
        else {
          sVar1 = (short)param_1[0x212];
          if ((sVar1 != 0) && (*(short *)(param_1 + 0x212) = sVar1 + -1, sVar1 != 1)) {
            return 1;
          }
        }
        if (param_1[0x1f0] == 0) {
          return 1;
        }
        func_0061C0A4((int)param_1,1,0);
      }
      else {
        *(short *)((int)param_1 + 0x84a) = *(short *)((int)param_1 + 0x84a) + -1;
      }
      return 0;
    }
  }
  return 1;
}

