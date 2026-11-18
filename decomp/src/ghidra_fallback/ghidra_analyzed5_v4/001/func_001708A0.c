#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0016B658(uint param_1,uint param_2);
extern int func_00170378(int param_1,int *param_2,int *param_3,undefined4 *param_4);
extern int func_003CBAE4(undefined4 *param_1);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_003FC2F8(int *param_1,ushort *param_2,int param_3);
extern int func_004CF6E0(int param_1,int *param_2,int param_3);
extern int func_00564C14(int *param_1,int *param_2,ushort *param_3,int *param_4);
extern undefined8 func_00565130(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,uint param_5);
extern int func_00565204(int *param_1,int *param_2,ushort *param_3,int *param_4);
extern int func_005655D0(int *param_1,int *param_2,ushort *param_3,int *param_4);
extern int func_00565904(undefined4 param_1,int *param_2,int param_3,int *param_4);
extern int func_00565B8C(int *param_1,int *param_2,ushort *param_3,int *param_4);
extern int *DAT_00171098;
extern uint *DAT_0017109c;
extern undefined4 *DAT_001710a0;
extern undefined4 DAT_001710a4;
extern uint *DAT_001710a8;
extern undefined4 DAT_001710ac;
extern int DAT_001710b0;
extern int DAT_001710b4;
extern undefined4 DAT_001710b8;
extern undefined4 DAT_001710bc;
extern uint DAT_001710c0;
extern undefined4 DAT_001710c4;
extern undefined4 DAT_001710c8;

// USA 001708A0 <- EU 001708A0 (Ghidra, non-matching)
// GLOBAL DAT_00171098 int *
// GLOBAL DAT_0017109c uint *
// GLOBAL DAT_001710a0 undefined4 *
// GLOBAL DAT_001710a4 undefined4
// GLOBAL DAT_001710a8 uint *
// GLOBAL DAT_001710ac undefined4
// GLOBAL DAT_001710b0 int
// GLOBAL DAT_001710b4 int
// GLOBAL DAT_001710b8 undefined4
// GLOBAL DAT_001710bc undefined4
// GLOBAL DAT_001710c0 uint
// GLOBAL DAT_001710c4 undefined4
// GLOBAL DAT_001710c8 undefined4

void func_001708A0(int param_1,int *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  undefined4 *puVar14;
  ushort *puVar15;
  uint uVar16;
  int *piVar17;
  bool bVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int * *)(albw_frame + 0x8))
  #define local_54 (*(ushort * *)(albw_frame + 0xc))
  #define local_4c (*(uint *)(albw_frame + 0x14))
  #define local_48 (*(uint *)(albw_frame + 0x18))
  #define local_44 (*(uint *)(albw_frame + 0x1c))
  #define local_40 (*(uint *)(albw_frame + 0x20))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(uint *)(albw_frame + 0x34))
  piVar17 = *(int **)(param_1 + 0x94);
  iVar10 = *DAT_00171098;
  piVar6 = *(int **)(iVar10 + 0x24);
  puVar12 = (ushort *)
            (**(int **)(*(int *)(param_1 + 0x8c) + 0x20) +
            (uint)**(ushort **)(param_1 + 0x90) * 0x154);
  if (param_3 != 0) {
    func_00170378(param_1,param_2,(int *)(iVar10 + 0x14),*(undefined4 **)(iVar10 + 0x20));
  }
  puVar14 = *(undefined4 **)(iVar10 + 0x1c);
  if (((*DAT_0017109c & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0017109c), iVar7 != 0)) {
    *DAT_001710a0 = DAT_001710a4;
  }
  if ((puVar14 == (undefined4 *)0x0) ||
     (iVar7 = (**(code **)*puVar14)(puVar14,DAT_001710a0), iVar7 == 0)) {
    puVar14 = (undefined4 *)0x0;
  }
  puVar15 = (ushort *)0x0;
  if (puVar14 != (undefined4 *)0x0) {
    puVar15 = (ushort *)(**(int **)(puVar14[0x23] + 0x20) + (uint)*(ushort *)puVar14[0x24] * 0x154);
  }
  uVar1 = *puVar12;
  if ((uVar1 & 1) == 0) {
    uVar16 = 0xffffffff;
    local_48 = 0;
  }
  else {
    uVar16 = (uint)puVar12[0x10];
    local_48 = func_0016B658(*DAT_001710a8,uVar16);
  }
  uVar4 = DAT_001710ac;
  local_4c = (uint)((int)*(short *)(iVar10 + 0x2e) == uVar16);
  local_2c = 0;
  bVar18 = (*puVar12 & 0xfe00) == 0;
  local_30 = 0;
  if (bVar18) {
    local_2c = (uint)(byte)puVar12[0x72];
  }
  if (!bVar18 || local_2c != 0) {
    local_2c = 1;
  }
  if ((*puVar12 & 0x10) == 0) {
    puVar14 = (undefined4 *)*param_2;
    *puVar14 = 0;
    puVar14[1] = uVar4;
    *param_2 = (int)(puVar14 + 2);
  }
  else {
    uVar19 = func_00565130(piVar17,param_2,(int)puVar12,(int)piVar6,
                           (int)*(char *)(iVar10 + 0x2d) & 0xffff);
    *(char *)(iVar10 + 0x2d) = (char)uVar19;
  }
  if (puVar15 != puVar12) {
    if (((*(int *)(iVar10 + 0x28) == *(int *)*piVar17) && (local_4c != 0)) &&
       ((local_2c != 0 || (*(char *)(iVar10 + 0x2c) == '\0')))) {
      if (((uVar1 & 1) != 0) && ((*(byte *)(*piVar6 + (uVar16 & 0xffff) * 0x278) & 1) != 0)) {
        *puVar12 = *puVar12 | 0x100;
      }
      local_54 = *(ushort **)(*piVar17 + 200);
      local_44 = *(int *)(*piVar17 + 0xcc) << 2;
      if (local_54 != (ushort *)0x0) {
        puVar8 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = (int)puVar8;
        puVar8 = func_003CC230(puVar8,&local_58,(int)local_54,local_44);
        *param_2 = (int)puVar8;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)((int)puVar8 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = (int)local_58;
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
      local_54 = (ushort *)piVar17[4];
      local_44 = piVar17[5] << 2;
      if (local_54 != (ushort *)0x0) {
        puVar8 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = (int)puVar8;
        puVar8 = func_003CC230(puVar8,&local_58,(int)local_54,local_44);
        *param_2 = (int)puVar8;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)((int)puVar8 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = (int)local_58;
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
      local_40 = *(uint *)(puVar12 + 0x9e);
      local_44 = *(int *)(puVar12 + 0xa0) << 2;
      if (local_40 != 0) {
        puVar8 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = (int)puVar8;
        puVar8 = func_003CC230(puVar8,&local_58,local_40,local_44);
        *param_2 = (int)puVar8;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)((int)puVar8 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = (int)local_58;
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
      local_44 = *(uint *)(puVar12 + 0xa2);
      local_40 = *(int *)(puVar12 + 0xa4) << 2;
      if (local_44 != 0) {
        puVar8 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = (int)puVar8;
        puVar8 = func_003CC230(puVar8,&local_58,local_44,local_40);
        *param_2 = (int)puVar8;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)((int)puVar8 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = (int)local_58;
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
      local_40 = *(uint *)(puVar12 + 0xa6);
      local_44 = *(int *)(puVar12 + 0xa8) << 2;
      if (local_40 != 0) {
        puVar8 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = (int)puVar8;
        puVar8 = func_003CC230(puVar8,&local_58,local_40,local_44);
        *param_2 = (int)puVar8;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)((int)puVar8 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = (int)local_58;
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
    }
    else if ((*(uint *)(*(int *)(param_1 + 0x8c) + 0x164) & 0x2000) == 0) {
      if ((((uVar1 & 1) == 0) || ((*(byte *)(*piVar6 + (uVar16 & 0xffff) * 0x278) & 1) == 0)) &&
         ((*puVar12 & 0x100) == 0)) {
        func_00564C14(piVar17,param_2,puVar12,piVar6);
      }
      else {
        func_005655D0(piVar17,param_2,puVar12,piVar6);
        *puVar12 = *puVar12 & 0xfeff;
      }
      local_30 = 1;
    }
    else {
      func_00565B8C(piVar17,param_2,puVar12,piVar6);
      *puVar12 = *puVar12 | 0x100;
    }
    if (local_2c != 0) {
      func_00565204(piVar17,param_2,puVar12,piVar6);
      uVar5 = 1;
      goto LAB_00170e7c;
    }
  }
  uVar5 = 0;
LAB_00170e7c:
  *(undefined1 *)(iVar10 + 0x2c) = uVar5;
  if ((*(uint *)(*(int *)(param_1 + 0x8c) + 0x164) & 0x40000) != 0) {
    func_004CF6E0(*(int *)(param_1 + 0x8c),param_2,(int)puVar12);
  }
  if ((local_48 & ~local_4c) != 0) {
    func_00565904(piVar17,param_2,(int)puVar12,piVar6);
  }
  if (local_30 != 0) {
    func_003FC2F8(param_2,puVar12,piVar6[0x19]);
  }
  uVar4 = DAT_001710b8;
  iVar7 = DAT_001710b4;
  uVar11 = *(uint *)(*(int *)(param_1 + 0x8c) + 0x164);
  if ((*(uint *)(DAT_001710b0 + 4) & uVar11) != 0) {
    iVar9 = DAT_001710b4 + 1;
    if ((uVar11 & 0x200000) == 0) {
      if ((uVar11 & 0x100000) == 0) {
        if ((uVar11 & 0x8000) != 0) {
          uVar2 = *(ushort *)(param_1 + 0xa6);
          puVar14 = (undefined4 *)*param_2;
          uVar3 = *(ushort *)(param_1 + 0xa4);
          *puVar14 = DAT_001710c8;
          puVar14[1] = iVar7;
          puVar14[2] = 0;
          puVar14[3] = iVar9;
          puVar8 = func_003CBAE4(puVar14 + 4);
          *puVar8 = uVar3 | 1;
          uVar11 = DAT_001710c0;
          puVar8[1] = DAT_001710c0;
          puVar8[2] = uVar2 | 1;
          puVar8[3] = uVar11 | (int)uVar11 >> 8;
          *param_2 = (int)(puVar8 + 4);
        }
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0xa6);
        puVar14 = (undefined4 *)*param_2;
        uVar3 = *(ushort *)(param_1 + 0xa4);
        *puVar14 = DAT_001710c4;
        puVar14[1] = iVar7;
        puVar14[2] = uVar4;
        puVar14[3] = iVar9;
        puVar8 = func_003CBAE4(puVar14 + 4);
        uVar11 = DAT_001710c0;
        *puVar8 = uVar3 | 1;
        puVar8[1] = uVar11;
        puVar8[2] = uVar2 | 1;
        puVar8[3] = uVar11 | (int)uVar11 >> 8;
        *param_2 = (int)(puVar8 + 4);
      }
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0xa6);
      puVar14 = (undefined4 *)*param_2;
      uVar3 = *(ushort *)(param_1 + 0xa4);
      *puVar14 = DAT_001710bc;
      puVar14[1] = iVar7;
      puVar14[2] = uVar4;
      puVar14[3] = iVar9;
      puVar8 = func_003CBAE4(puVar14 + 4);
      uVar11 = DAT_001710c0;
      *puVar8 = uVar3 | 1;
      puVar8[1] = uVar11;
      puVar8[2] = uVar2 | 1;
      puVar8[3] = uVar11 | (int)uVar11 >> 8;
      *param_2 = (int)(puVar8 + 4);
    }
  }
  iVar9 = *(int *)(param_1 + 0xa8);
  bVar18 = *(char *)(iVar9 + 0x10) != '\0';
  iVar7 = 0;
  if (bVar18) {
    iVar7 = *(int *)(iVar9 + 0xc);
  }
  if (bVar18 && 0 < iVar7) {
    iVar7 = *(int *)(iVar9 + 8);
    local_58 = param_2;
    local_54 = puVar12;
    while (iVar13 = *(int *)(iVar7 + 4), iVar7 != iVar9 + 4) {
      puVar14 = *(undefined4 **)(*(int *)(iVar7 + 8) + 0x20);
      iVar7 = iVar13;
      if (puVar14 != (undefined4 *)0x0) {
        (**(code **)*puVar14)(puVar14,&local_58);
      }
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar16 = 0xffffffff;
  }
  *(short *)(iVar10 + 0x2e) = (short)uVar16;
  *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)*piVar17;
  return;
}

