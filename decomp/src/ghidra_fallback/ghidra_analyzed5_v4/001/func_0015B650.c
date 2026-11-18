#include "ghidra_types.h"

extern int func_0015B580(int param_1,uint param_2);
extern int func_00161178(undefined4 *param_1);
extern int func_0052FD14(int param_1,undefined4 *param_2);
extern int *DAT_0015b770;
extern undefined4 DAT_0015b774;
extern int *DAT_0015b778;
extern undefined4 DAT_0015b77c;

// USA 0015B650 <- EU 0015B654 (Ghidra, non-matching)
// GLOBAL DAT_0015b770 int *
// GLOBAL DAT_0015b774 undefined4
// GLOBAL DAT_0015b778 int *
// GLOBAL DAT_0015b77c undefined4

undefined4
func_0015B650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  piVar1 = DAT_0015b778;
  iVar2 = *DAT_0015b770;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x44);
  }
  if ((iVar2 == 0 || iVar3 == 0) && ((uint)param_1[0x24f] <= (uint)param_1[0x24e])) {
    local_10 = DAT_0015b774;
    iVar3 = func_0052FD14(*DAT_0015b778 + 0x3dbbc,&local_10);
    if ((iVar3 == 0) && ((uint)param_1[0x255] <= (uint)param_1[0x254])) {
      local_10 = DAT_0015b77c;
      iVar3 = func_0052FD14(*piVar1 + 0x3dbbc,&local_10);
      if (iVar3 == 0) {
        if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 0) {
          if ((uint)param_1[0x252] <= (uint)param_1[0x251]) {
            return 0;
          }
        }
        else {
          puVar4 = func_00161178(param_1);
          if ((puVar4 == (undefined4 *)0x0) || ((uint)puVar4[0x252] <= (uint)puVar4[0x251])) {
            uVar5 = 0;
            while ((puVar4 = func_0015B580((int)param_1,uVar5), puVar4 == (undefined4 *)0x0 ||
                   ((uint)puVar4[0x252] <= (uint)puVar4[0x251]))) {
              uVar5 = uVar5 + 1;
              if (1 < uVar5) {
                return 0;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return 1;
}

