#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_0017988C(int param_1,uint *param_2,uint *param_3,uint param_4);
extern int func_00582858(uint *param_1,uint param_2);
extern int func_00582888(int param_1,uint param_2);

// USA 00178F40 <- EU 00178F40 (Ghidra, non-matching)

void func_00178F40(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define puStack_34 (*(uint * *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(uint *)(albw_frame + 0x14))
  puVar9 = *(uint **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    puVar9 = *(uint **)(param_1 + 8);
  }
  do {
    while( true ) {
      puVar8 = puVar9;
      sVar1 = (short)*puVar8;
      if ((sVar1 == 0) ||
         ((*(char *)(param_1 + 0x2e) == '\x01' &&
          ((int)(uint)((uint)((int)puVar8 - (int)*(uint **)(param_1 + 0xc)) <
                      (uint)*(ushort *)(param_1 + 0x20)) <=
           (int)-(uint)(puVar8 < *(uint **)(param_1 + 0xc)))))) {
        return;
      }
      if (sVar1 == 0xe) break;
      puVar9 = puVar8;
      if (sVar1 == 0xf) {
        puVar9 = (uint *)((int)puVar8 + 6);
        goto LAB_00178fc8;
      }
LAB_001790f4:
      puVar9 = (uint *)((int)puVar9 + 2);
    }
    puVar9 = (uint *)((int)puVar8 + *(ushort *)((int)puVar8 + 6) + 8);
LAB_00178fc8:
    if (puVar8 == (uint *)0x0) goto LAB_001790f4;
    if (*(short *)((int)puVar8 + 2) == 1) {
      sVar1 = (short)puVar8[1];
      if (sVar1 == 6) {
        uVar2 = puVar8[2];
        uVar7 = (uint)(byte)uVar2;
        puVar8 = *(uint **)(param_1 + 0x14);
        uVar5 = 0;
        if (uVar7 != 0) {
          do {
            uVar6 = *(int *)(param_1 + 0x1c) + uVar5 + 1;
            uVar3 = func_00582888((int)puVar8,uVar6);
            local_38 = func_00582858(puVar8,uVar6);
            if (uVar5 < *(uint *)(param_1 + 0x44)) {
              iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + uVar5 * 4);
            }
            else {
              iVar4 = 0;
            }
            puStack_34 = puVar8;
            uStack_30 = uVar3;
            local_2c = uVar6;
            func_001788DC(iVar4,&local_38);
            if ((int)uVar5 < (int)(uVar7 - 1)) {
              if (uVar5 < *(uint *)(param_1 + 0x44)) {
                iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + uVar5 * 4);
              }
              else {
                iVar4 = 0;
              }
              *(undefined1 *)(iVar4 + 0x40) = 1;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)uVar7);
        }
        *(byte *)(param_1 + 0x2f) = (byte)uVar2;
      }
      else if (sVar1 == 7) {
        *(ushort *)(param_1 + 0x38) =
             (ushort)(byte)puVar8[2] + (ushort)*(byte *)((int)puVar8 + 9) * 0x100;
      }
      else if (sVar1 == 0xf) {
        *(undefined1 *)(param_1 + 0x3e) = 1;
      }
      else if (sVar1 == 0x10) {
        *(undefined1 *)(param_1 + 0x40) = 1;
      }
    }
    else if (*(short *)((int)puVar8 + 2) == 2 && *(char *)(param_1 + 0x2e) == '\x01') {
      puVar9 = func_0017988C(param_1,puVar8,puVar9,(uint)puVar8);
    }
  } while( true );
}

