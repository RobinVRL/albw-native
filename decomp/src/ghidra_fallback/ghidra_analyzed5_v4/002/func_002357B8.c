#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0014EC00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002F8F5C(undefined4 *param_1,int param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00235a8c;
extern int *DAT_00235a90;
extern int DAT_00235a94;
extern int *DAT_00235a98;
extern int *DAT_00235a9c;
extern int *DAT_00235aa0;
extern int DAT_00235aa4;
extern uint *DAT_00235aa8;
extern uint *DAT_00235aac;
extern uint *DAT_00235ab0;
extern int *DAT_00235ab4;
extern int *DAT_00235ab8;
extern float DAT_00235abc;

// USA 002357B8 <- EU 002357B8 (Ghidra, non-matching)
// GLOBAL DAT_00235a8c int *
// GLOBAL DAT_00235a90 int *
// GLOBAL DAT_00235a94 int
// GLOBAL DAT_00235a98 int *
// GLOBAL DAT_00235a9c int *
// GLOBAL DAT_00235aa0 int *
// GLOBAL DAT_00235aa4 int
// GLOBAL DAT_00235aa8 uint *
// GLOBAL DAT_00235aac uint *
// GLOBAL DAT_00235ab0 uint *
// GLOBAL DAT_00235ab4 int *
// GLOBAL DAT_00235ab8 int *
// GLOBAL DAT_00235abc float

undefined4 func_002357B8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define iStack_28 (*(int *)(albw_frame + 0x18))
  local_30 = param_1;
  iStack_2c = param_2;
  iStack_28 = param_3;
  if (((((param_3 == 0) && (*(char *)(*DAT_00235a8c + 0x18) != '\a')) &&
       (*(char *)(*DAT_00235a8c + 0x18) != '%')) &&
      ((local_34 = (char *)(param_1 + 0x64a), *(byte *)(param_1 + 0x64a) < 5 && (*DAT_00235a90 != 0)
       ))) && ((bVar2 = func_00584B94(*DAT_00235a90,DAT_00235a94), piVar1 = DAT_00235a98, bVar2 &&
               (uVar3 = func_00111A64((uint *)(*DAT_00235a98 + 0x660)),
               (uint)((ulonglong)uVar3 * 100 >> 0x20) < 2)))) {
    iVar10 = -1;
    uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
    iVar9 = 0;
    iVar4 = func_00588BE4(local_30);
    iVar8 = DAT_00235aa4;
    if ((iVar4 == *DAT_00235a9c) || (iVar4 == *DAT_00235aa0)) {
      iVar4 = 0;
      iVar11 = DAT_00235aa4 + -0xc;
      do {
        iVar9 = iVar9 + *(int *)(iVar8 + iVar4 * 4);
        if (100 < iVar9) {
          iVar9 = 100;
        }
        if ((int)((ulonglong)uVar3 * 100 >> 0x20) < iVar9) {
          iVar5 = *(int *)(iVar11 + iVar4 * 4);
          if (iVar5 == 0) {
            iVar5 = func_0019B04C(*DAT_00235aa8);
          }
          else if (iVar5 == 3) {
            iVar5 = func_0019B04C(*DAT_00235aac);
          }
          else {
            if (iVar5 != 5) goto LAB_002359d8;
            iVar5 = func_0019B04C(*DAT_00235ab0);
          }
          iVar6 = 0;
          if (iVar5 != 0) {
            iVar6 = *(int *)(iVar5 + 0x1c8);
          }
          if (iVar5 != 0 && iVar6 != 0) {
            iVar8 = *(int *)(iVar11 + iVar4 * 4);
            if (iVar8 != -1) goto LAB_00235920;
            break;
          }
        }
        else if ((iVar10 == -1) ||
                (uVar7 = func_00111A64((uint *)(*DAT_00235a98 + 0x660)),
                0x32ffffffff < (ulonglong)uVar7 * 100)) {
          iVar5 = *(int *)(iVar11 + iVar4 * 4);
          if (iVar5 == 0) {
            iVar5 = func_0019B04C(*DAT_00235aa8);
          }
          else if (iVar5 == 3) {
            iVar5 = func_0019B04C(*DAT_00235aac);
          }
          else {
            if (iVar5 != 5) goto LAB_002359d8;
            iVar5 = func_0019B04C(*DAT_00235ab0);
          }
          iVar6 = 0;
          if (iVar5 != 0) {
            iVar6 = *(int *)(iVar5 + 0x1c8);
          }
          if (iVar5 != 0 && iVar6 != 0) {
            iVar10 = *(int *)(iVar11 + iVar4 * 4);
          }
        }
LAB_002359d8:
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      iVar8 = iVar10;
      if (iVar8 != -1) {
LAB_00235920:
        *local_34 = *(char *)(local_30 + 0x64a) + '\x01';
        return func_002F8F5C((undefined4 *)(param_2 + 4),iVar8);
      }
    }
  }
  iVar8 = 0x11;
  if (*(short *)(param_2 + 0x2c) == 1) {
    iVar10 = func_00588BE4(local_30);
    if ((iVar10 == *DAT_00235aa0) || (iVar10 == *DAT_00235a9c)) {
      iVar8 = 0x17;
    }
    else if ((iVar10 == *DAT_00235ab4) || (iVar10 == *DAT_00235ab8)) {
      iVar8 = 0x18;
    }
  }
  local_40 = *(undefined4 *)(param_2 + 4);
  uStack_38 = *(undefined4 *)(param_2 + 0xc);
  local_3c = *(float *)(param_2 + 8) + DAT_00235abc;
  return func_0014EC00(local_30,&local_40,*(undefined4 *)(param_2 + 0x20),iVar8);
}

