#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7CAC(int param_1,uint param_2,int param_3);
extern int func_00396E74(int *param_1);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_005430D4(int param_1);
extern int func_0055C4AC(int *param_1,float fparam_0);
extern int func_0058A7D4(void);
extern float DAT_003b90fc;
extern int DAT_003b9100;
extern int DAT_003b9104;
extern int DAT_003b9108;

// USA 003B8EC0 <- EU 003B8E9C (Ghidra, non-matching)
// GLOBAL DAT_003b90fc float
// GLOBAL DAT_003b9100 int
// GLOBAL DAT_003b9104 int
// GLOBAL DAT_003b9108 int

undefined1 func_003B8EC0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  
  if (*(char *)((int)param_1 + 0x62) == '\0') {
    return 0;
  }
  iVar2 = func_005430D4(param_1[0x12]);
  if ((iVar2 == 0) ||
     (((iVar2 = (**(code **)(*param_1 + 0x104))(param_1,0), iVar2 == 0 &&
       (iVar2 = (**(code **)(*param_1 + 0x104))(param_1,2), iVar2 == 0)) &&
      (iVar2 = (**(code **)(*param_1 + 0x104))(param_1,1), iVar2 == 0)))) {
    if (*(char *)(param_1[0x12] + 0x936) == '\x02') {
      return 0;
    }
    if (*(char *)(param_1[0x12] + 0xe00) != '\r') {
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      if ((0x31 < (uint)((ulonglong)uVar4 * 0x65 >> 0x20)) &&
         (iVar2 = func_002B7CAC(param_1[0x12],2,0), iVar2 != 0)) {
        iVar2 = param_1[0x12];
        *(undefined1 *)(iVar2 + 0x936) = 1;
        piVar5 = *(int **)(*(int *)(iVar2 + 0x93c) + 4);
        (**(code **)(*piVar5 + 0x138))(piVar5,1);
        return 1;
      }
    }
    bVar1 = func_0055C4AC((int *)(param_1[0x12] + 0xb48),DAT_003b90fc);
    if ((!bVar1) ||
       (((iVar2 = func_002B7CAC(param_1[0x12],3,0), iVar2 == 0 &&
         ((*(char *)(DAT_003b9100 + param_1[0x12]) < '\x02' ||
          (iVar2 = func_002B7CAC(param_1[0x12],6,0), iVar2 == 0)))) &&
        ((bVar1 = func_00396E74((int *)(param_1[0x12] + 0xb48)), !bVar1 ||
         (((((iVar2 = func_002B7CAC(param_1[0x12],0xb,0), iVar2 == 0 &&
             (iVar2 = func_002B7CAC(param_1[0x12],4,0), iVar2 == 0)) &&
            ((*(char *)(DAT_003b9100 + param_1[0x12]) < '\x02' ||
             (iVar2 = func_002B7CAC(param_1[0x12],6,0), iVar2 == 0)))) &&
           ((*(char *)(DAT_003b9104 + param_1[0x12]) < '\x02' ||
            (iVar2 = func_002B7CAC(param_1[0x12],7,0), iVar2 == 0)))) &&
          ((*(char *)(DAT_003b9108 + param_1[0x12]) < '\x02' ||
           (iVar2 = func_002B7CAC(param_1[0x12],8,0), iVar2 == 0)))))))))) {
      return 0;
    }
  }
  else {
    func_003B147C(param_1,5,0);
  }
  return 1;
}

