#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_001110BC(int *param_1,int param_2);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003E696C(int *param_1,undefined4 *param_2);
extern int func_00407A24(int *param_1);
extern int func_00407A60(int *param_1,int param_2);
extern int func_00407B44(int *param_1,int param_2);
extern int func_00407C04(int *param_1,int param_2);
extern int func_0040A588(int param_1,int param_2,undefined4 *param_3,uint *param_4,int param_5, undefined4 param_6,int *param_7);
extern int func_0040B28C(int param_1,int *param_2,uint *param_3,ushort *param_4,char *param_5,int param_6, undefined4 param_7,undefined4 *param_8);
extern int func_0040B7B8(int param_1,int param_2,undefined4 *param_3,int *param_4,int param_5, undefined4 param_6,int *param_7);
extern int func_0040D5F4(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_0040D650(int param_1,undefined1 param_2,undefined4 param_3);
extern int func_0040D818(int param_1,undefined4 *param_2,undefined4 param_3,byte param_4);
extern int func_0040D864(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_0040D914(int param_1,float fparam_0);
extern int func_0040D970(int *param_1,undefined1 param_2);
extern int func_0040D9A0(int *param_1,undefined4 param_2);
extern int func_00412744(int *param_1,int param_2);
extern int func_00412814(int *param_1,int param_2);
extern int func_00412C0C(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_00569658(int param_1);
extern int func_00569710(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569A64(int param_1,uint param_2,undefined2 *param_3);
extern int func_00569B68(int param_1,uint param_2,uint *param_3);
extern int func_00569BBC(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569CB0(int param_1,uint param_2,undefined1 *param_3);
extern int func_0056CAD4(int param_1,uint param_2);
extern int func_0056CB18(int param_1,uint param_2);
extern undefined *DAT_0040b260;
extern undefined4 DAT_0040b264;
extern float DAT_0040b268;

// USA 0040A7EC <- EU 0040A7CC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 uint *
// GLOBAL DAT_0040b260 undefined *
// GLOBAL DAT_0040b264 undefined4
// GLOBAL DAT_0040b268 float

uint func_0040A7EC(int param_1,int *param_2,uint *param_3,int *param_4,uint param_5,int param_6,
                  uint *param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int **ppiVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  uint **ppuVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint in_fpscr;
  float fVar21;
  undefined1 uVar22;
  uint uVar23;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define uStack_b8 (*(uint *)(albw_frame + 0x8))
  #define local_b4 (*(uint *)(albw_frame + 0xc))
  #define local_b0 (*(uint *)(albw_frame + 0x10))
  #define local_ac (*(uint * *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_a4 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_a3 (*(undefined1 *)(albw_frame + 0x1d))
  #define local_a2 (*(undefined1 *)(albw_frame + 0x1e))
  #define local_a0 (*(int * *)(albw_frame + 0x20))
  #define local_9c (*(int * *)(albw_frame + 0x24))
  #define local_98 (*(uint *)(albw_frame + 0x28))
  #define local_94 (*(uint *)(albw_frame + 0x2c))
  #define local_8c (*(int * *)(albw_frame + 0x34))
  #define local_88 (*(uint * *)(albw_frame + 0x38))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(uint * *)(albw_frame + 0x40))
  #define local_7c (*(uint * *)(albw_frame + 0x44))
  #define local_78 (*(uint * *)(albw_frame + 0x48))
  #define local_74 (*(uint * *)(albw_frame + 0x4c))
  #define local_70 (*(uint * *)(albw_frame + 0x50))
  #define local_6c (*(int * *)(albw_frame + 0x54))
  #define local_68 (*(uint *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(undefined1 *)(albw_frame + 0x60))
  #define local_5f (*(undefined1 *)(albw_frame + 0x61))
  #define local_39 (*(char *)(albw_frame + 0x87))
  #define local_38 (*(uint * *)(albw_frame + 0x88))
  #define iStack_34 (*(int *)(albw_frame + 0x8c))
  #define local_30 (*(int * *)(albw_frame + 0x90))
  #define local_2c (*(uint * *)(albw_frame + 0x94))
  #define piStack_28 (*(int * *)(albw_frame + 0x98))
  if ((*(int *)(param_1 + 4) == 0) ||
     (piVar13 = param_4, iStack_34 = param_1, local_30 = param_2, local_2c = param_3,
     piStack_28 = param_4, bVar2 = func_00569658(*(int *)(param_1 + 4)), !bVar2)) {
    return 0xb;
  }
  if (*local_30 != 0) {
    func_00407A24(local_30);
  }
  bVar2 = func_00569710(*(int *)(param_1 + 4),(uint)local_2c,&uStack_b8);
  if (!bVar2) {
    return 3;
  }
  local_98 = 0;
  local_94 = 0;
  puVar16 = (uint *)0x0;
  local_80 = local_ac;
  local_38 = (uint *)0x0;
  local_78 = (uint *)0x0;
  uVar7 = local_b4;
  uVar23 = local_b0;
  if (param_7 != (uint *)0x0) {
    uVar8 = *param_7;
    if ((uVar8 & 1) != 0) {
      local_98 = (uint)(byte)param_7[1];
      local_94 = param_7[2];
    }
    if ((uVar8 & 4) != 0) {
      local_80 = (uint *)param_7[4];
    }
    if ((uVar8 & 2) != 0) {
      local_b4 = param_7[3];
    }
    if ((uVar8 & 8) != 0) {
      local_b0 = param_7[5];
    }
    if ((uVar8 & 0x10) != 0) {
      puVar16 = param_7 + 6;
    }
    if ((uVar8 & 0x20) != 0) {
      local_38 = param_7 + 0xc;
    }
    uVar7 = local_b4;
    uVar23 = local_b0;
    if ((uVar8 & 0x40) != 0) {
      local_78 = param_7 + 0xd;
    }
  }
  puVar15 = (uint *)0x0;
  puVar17 = local_80;
  if (param_6 != 0) {
    puVar17 = (uint *)((int)local_80 + -1);
  }
  if (param_4 != (int *)0x0) {
    puVar15 = (uint *)func_0040D9A0(param_4,local_2c);
  }
  local_68 = (int)puVar17 + (int)puVar15;
  iVar4 = UnsignedSaturate(local_68,7);
  UnsignedDoesSaturate(local_68,7);
  local_9c = (int *)0x0;
  if ((param_5 != 0) &&
     ((3 < uVar23 || (local_9c = (int *)(param_5 + uVar23 * 0x10 + 8), local_9c == (int *)0x0)))) {
    return 0xe;
  }
  puVar12 = (uint *)((uVar7 & 0xffffff) * 7);
  local_6c = (int *)(*(int *)(param_1 + 0x1c) + (uVar7 & 0xffffff) * 0x5c);
  iVar3 = func_00407C04(local_6c,iVar4);
  if ((iVar3 == 0) ||
     ((local_9c != (int *)0x0 && (iVar4 = func_00412814(local_9c,iVar4), iVar4 == 0)))) {
    return 1;
  }
  puVar19 = (uint *)0x0;
  local_88 = (uint *)0x0;
  puVar18 = (uint *)0x0;
  iVar4 = func_0056CB18(*(int *)(param_1 + 4),(uint)local_2c);
  if (iVar4 == 1) {
    local_7c = local_2c;
    iVar4 = UnsignedSaturate(local_68,7);
    UnsignedDoesSaturate(local_68,7);
    local_8c = param_4;
    local_74 = puVar17;
LAB_0040a9ec:
    do {
      if (*(int *)(param_1 + 0x34) == 0) {
        if (*(int *)(param_1 + 0x28) == 0) {
          puVar19 = (uint *)0x0;
          goto LAB_0040aa94;
        }
        iVar3 = *(int *)(param_1 + 0x2c);
        if ((int *)(iVar3 + -0xf4) != (int *)0x0) {
          iVar20 = *(int *)(iVar3 + -0xa4) + (uint)*(byte *)(iVar3 + -0x5b);
          puVar12 = (uint *)UnsignedSaturate(iVar20,7);
          UnsignedDoesSaturate(iVar20,7);
          if ((int)puVar12 <= iVar4) {
            func_001110BC((int *)(iVar3 + -0xf4),0);
            goto LAB_0040a9ec;
          }
        }
        puVar19 = (uint *)0x0;
        puVar17 = puVar19;
        puVar10 = local_88;
        goto joined_r0x0040ac08;
      }
      puVar17 = *(uint **)(param_1 + 0x38);
      puVar19 = puVar17 + -0x3d;
      func_003E696C((int *)(param_1 + 0x34),puVar17);
    } while (puVar19 == (uint *)0x0);
    (**(code **)(*puVar19 + 0xc))(puVar19);
    func_0040D650((int)puVar19,(char)local_74,puVar15);
    piVar11 = *(int **)(param_1 + 0x2c);
    if (piVar11 != (int *)(param_1 + 0x2c)) {
      do {
        piVar13 = (int *)((uint)*(byte *)((int)piVar11 + -0x5b) + piVar11[-0x29]);
        piVar5 = (int *)0x7f;
        if (((int)piVar13 < 0x80) && (piVar5 = piVar13, (int)piVar13 < 0)) {
          piVar5 = (int *)0x0;
        }
      } while (((int)piVar5 <= iVar4) &&
              (piVar11 = (int *)*piVar11, piVar11 != (int *)(param_1 + 0x2c)));
    }
    func_00112364((int *)(param_1 + 0x28),(int)piVar11,(int *)puVar17);
    puVar12 = puVar17;
LAB_0040aa94:
    if (puVar19 == (uint *)0x0) {
      return 0xd;
    }
    puVar19[0x2b] = (uint)local_7c;
    puVar17 = puVar19;
    puVar10 = local_88;
    if (local_8c != (int *)0x0) {
      func_0040D818((int)puVar19,local_8c,puVar12,(byte)piVar13);
      puVar10 = local_88;
    }
  }
  else {
    local_a0 = param_4;
    if (iVar4 == 2) {
      local_74 = local_2c;
      iVar4 = UnsignedSaturate(local_68,7);
      UnsignedDoesSaturate(local_68,7);
LAB_0040ab38:
      do {
        if (*(int *)(param_1 + 0xcc) == 0) {
          if (*(int *)(param_1 + 0xc0) == 0) {
            puVar18 = (uint *)0x0;
            goto LAB_0040abe0;
          }
          iVar3 = *(int *)(param_1 + 0xc4);
          if ((int *)(iVar3 + -0xf4) != (int *)0x0) {
            puVar12 = *(uint **)(iVar3 + -0xa4);
            iVar9 = (uint)*(byte *)(iVar3 + -0x5b) + (int)puVar12;
            iVar20 = UnsignedSaturate(iVar9,7);
            UnsignedDoesSaturate(iVar9,7);
            if (iVar20 <= iVar4) {
              func_001110BC((int *)(iVar3 + -0xf4),0);
              goto LAB_0040ab38;
            }
          }
          puVar18 = (uint *)0x0;
          puVar17 = puVar18;
          puVar10 = local_88;
          goto joined_r0x0040ac08;
        }
        puVar10 = *(uint **)(param_1 + 0xd0);
        puVar18 = puVar10 + -0x3d;
        func_003E696C((int *)(param_1 + 0xcc),puVar10);
        uVar22 = SUB41(puVar17,0);
      } while (puVar18 == (uint *)0x0);
      (**(code **)(*puVar18 + 0xc))(puVar18);
      func_0040D650((int)puVar18,uVar22,puVar15);
      piVar11 = *(int **)(param_1 + 0xc4);
      if (piVar11 != (int *)(param_1 + 0xc4)) {
        do {
          piVar13 = (int *)((uint)*(byte *)((int)piVar11 + -0x5b) + piVar11[-0x29]);
          piVar5 = (int *)0x7f;
          if (((int)piVar13 < 0x80) && (piVar5 = piVar13, (int)piVar13 < 0)) {
            piVar5 = (int *)0x0;
          }
        } while (((int)piVar5 <= iVar4) &&
                (piVar11 = (int *)*piVar11, piVar11 != (int *)(param_1 + 0xc4)));
      }
      func_00112364((int *)(param_1 + 0xc0),(int)piVar11,(int *)puVar10);
      puVar12 = puVar10;
LAB_0040abe0:
      if (puVar18 == (uint *)0x0) {
        return 0xd;
      }
      puVar18[0x2b] = (uint)local_74;
      puVar17 = puVar18;
      puVar10 = local_88;
      if (local_a0 != (int *)0x0) {
        func_0040D818((int)puVar18,local_a0,puVar12,(byte)piVar13);
        puVar10 = local_88;
      }
    }
    else {
      if (iVar4 != 3) {
        return 3;
      }
      iVar4 = UnsignedSaturate(local_68,7);
      UnsignedDoesSaturate(local_68,7);
      puVar12 = local_2c;
      local_74 = puVar15;
      local_70 = puVar17;
LAB_0040ac88:
      do {
        if (*(int *)(param_1 + 0x80) == 0) {
          if (*(int *)(param_1 + 0x74) == 0) {
            puVar17 = (uint *)0x0;
            goto LAB_0040ad34;
          }
          iVar3 = *(int *)(param_1 + 0x78);
          puVar15 = (uint *)(iVar3 + -0xf4);
          if (puVar15 != (uint *)0x0) {
            iVar3 = (uint)*(byte *)(iVar3 + -0x5b) + *(int *)(iVar3 + -0xa4);
            piVar13 = (int *)UnsignedSaturate(iVar3,7);
            UnsignedDoesSaturate(iVar3,7);
            if ((int)piVar13 <= iVar4) {
              func_001110BC((int *)puVar15,0);
              goto LAB_0040ac88;
            }
          }
          puVar12 = puVar15;
          puVar17 = (uint *)0x0;
          puVar10 = (uint *)0x0;
          goto joined_r0x0040ac08;
        }
        puVar10 = *(uint **)(param_1 + 0x84);
        puVar17 = puVar10 + -0x3d;
        func_003E696C((int *)(param_1 + 0x80),puVar10);
      } while (puVar17 == (uint *)0x0);
      (**(code **)(*puVar17 + 0xc))(puVar17);
      func_0040D650((int)puVar17,(char)local_70,local_74);
      piVar11 = *(int **)(param_1 + 0x78);
      if (piVar11 != (int *)(param_1 + 0x78)) {
        do {
          piVar13 = (int *)0x0;
          iVar20 = (uint)*(byte *)((int)piVar11 + -0x5b) + piVar11[-0x29];
          iVar3 = 0x7f;
          if ((iVar20 < 0x80) && (iVar3 = iVar20, iVar20 < 0)) {
            iVar3 = 0;
          }
        } while ((iVar3 <= iVar4) && (piVar11 = (int *)*piVar11, piVar11 != (int *)(param_1 + 0x78))
                );
      }
      func_00112364((int *)(param_1 + 0x74),(int)piVar11,(int *)puVar10);
      puVar15 = puVar10;
LAB_0040ad34:
      if (puVar17 == (uint *)0x0) {
        return 0xd;
      }
      puVar17[0x2b] = (uint)puVar12;
      puVar12 = puVar15;
      puVar10 = puVar17;
      if (local_a0 != (int *)0x0) {
        func_0040D818((int)puVar17,local_a0,puVar15,(byte)piVar13);
        puVar12 = puVar15;
      }
    }
  }
joined_r0x0040ac08:
  local_88 = puVar10;
  if (puVar17 == (uint *)0x0) {
    return 0xd;
  }
  iVar4 = func_00407B44(local_6c,(int)puVar17);
  if (iVar4 != 0) {
    func_0040D864((int *)puVar17,local_a2,puVar12,piVar13);
    if ((param_7 != (uint *)0x0) && ((*param_7 & 0x100) != 0)) {
      puVar17[0x3c] = param_7[0x11];
    }
    iVar4 = *(int *)(param_1 + 0x114);
    bVar2 = false;
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + 4);
    }
    if (iVar4 != 0 && cVar1 != '\0') {
      iVar4 = func_0056CAD4(*(int *)(param_1 + 4),local_2c);
      piVar13 = *(int **)(param_1 + 0x114);
      if (((char)piVar13[1] == '\0') ||
         (iVar4 = (**(code **)(*piVar13 + 8))(piVar13,iVar4), iVar4 == 0)) {
        bVar2 = true;
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x114) + 4) = 0;
      }
    }
    iVar4 = func_0056CB18(*(int *)(param_1 + 4),(uint)local_2c);
    if (iVar4 == 1) {
      local_78 = (uint *)0x0;
      local_60 = 0;
      local_64 = 0;
      local_5f = 0;
      local_68 = 0xffffffff;
      local_74 = (uint *)0xffffffff;
      local_70 = (uint *)0xffffffff;
      local_6c = (int *)0xffffffff;
      iVar4 = func_00569B68(*(int *)(param_1 + 4),(uint)local_2c,(uint *)&local_78);
      if (iVar4 == 0) {
        (**(code **)(*puVar19 + 0x10))(puVar19);
        goto joined_r0x0040b0dc;
      }
      if (puVar16 != (uint *)0x0) {
        if ((uint *)puVar16[2] != (uint *)0xffffffff) {
          local_74 = (uint *)puVar16[2];
        }
        if ((uint *)puVar16[3] != (uint *)0xffffffff) {
          local_70 = (uint *)puVar16[3];
        }
        if ((int *)puVar16[4] != (int *)0xffffffff) {
          local_6c = (int *)puVar16[4];
        }
        if (puVar16[5] != 0xffffffff) {
          local_68 = puVar16[5];
        }
      }
      ppuVar14 = &local_78;
      puVar15 = &uStack_b8;
      uVar7 = func_0040B7B8(param_1,(int)puVar19,puVar15,(int *)ppuVar14,local_98,local_94,
                            (int *)puVar16);
      uVar7 = uVar7 & 0xff;
      if (uVar7 != 0) {
        (**(code **)(*puVar19 + 0x10))(puVar19);
joined_r0x0040b088:
        if (bVar2) {
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
          *(undefined1 *)(*(int *)(param_1 + 0x114) + 4) = 1;
        }
        return uVar7;
      }
    }
    else if (iVar4 == 2) {
      local_78 = (uint *)0x0;
      iVar4 = func_00100118((int)&local_74,DAT_0040b260,0xd,4);
      *(undefined4 *)(iVar4 + 0x34) = DAT_0040b264;
      *(undefined1 *)(iVar4 + 0x38) = 0x7f;
      *(undefined1 *)(iVar4 + 0x3b) = 0;
      *(undefined2 *)(iVar4 + 0x39) = 0;
      iVar4 = func_00569A64(*(int *)(param_1 + 4),(uint)local_2c,(undefined2 *)&local_78);
      if (iVar4 == 0) {
        (**(code **)(*puVar18 + 0x10))(puVar18);
        goto joined_r0x0040b0dc;
      }
      local_8c = (int *)((uint)local_8c & 0xffffff00);
      ppiVar6 = (int **)0x0;
      local_88 = (uint *)0x0;
      local_84 = 0;
      if (local_39 == '\x02') {
        iVar4 = func_00569CB0(*(int *)(param_1 + 4),(uint)local_2c,(undefined1 *)&local_8c);
        if (iVar4 == 0) {
          (**(code **)(*puVar18 + 0x10))(puVar18);
          goto joined_r0x0040b0dc;
        }
        ppiVar6 = &local_8c;
      }
      ppuVar14 = &local_78;
      puVar15 = &uStack_b8;
      uVar7 = func_0040B28C(param_1,(int *)puVar18,puVar15,(ushort *)ppuVar14,(char *)ppiVar6,
                            local_98,local_94,local_38);
      uVar7 = uVar7 & 0xff;
      if (uVar7 != 0) {
        (**(code **)(*puVar18 + 0x10))(puVar18);
        goto joined_r0x0040b088;
      }
    }
    else {
      if (iVar4 != 3) {
        (**(code **)(*puVar17 + 0x10))(puVar17);
joined_r0x0040b0dc:
        if (bVar2) {
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
          *(undefined1 *)(*(int *)(param_1 + 0x114) + 4) = 1;
        }
        return 3;
      }
      local_70 = (uint *)0x0;
      local_6c = (int *)((uint)local_6c & 0xffff0000);
      iVar4 = func_00569BBC(*(int *)(param_1 + 4),(uint)local_2c,&local_74);
      if (iVar4 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
        goto joined_r0x0040b0dc;
      }
      ppuVar14 = &local_74;
      puVar15 = &uStack_b8;
      uVar7 = func_0040A588(param_1,(int)local_88,puVar15,(uint *)ppuVar14,local_98,local_94,
                            (int *)local_78);
      uVar7 = uVar7 & 0xff;
      if (uVar7 != 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
        goto joined_r0x0040b088;
      }
    }
    if (bVar2) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x114) + 4) = 1;
    }
    fVar21 = (float)VectorSignedToFloat(local_a8,(byte)(in_fpscr >> 0x15) & 3);
    func_0040D914((int)puVar17,fVar21 * DAT_0040b268);
    func_00412C0C((int *)puVar17,local_a4,puVar15,(int *)ppuVar14);
    func_0040D5F4((int *)puVar17,local_a3,puVar15,(int *)ppuVar14);
    if ((local_9c == (int *)0x0) || (iVar4 = func_00412744(local_9c,(int)puVar17), iVar4 != 0)) {
      if (param_5 != 0) {
        puVar17[5] = param_5;
      }
      if (param_6 != 0) {
        func_0040D970((int *)puVar17,(char)local_80);
      }
      func_00407A60(local_30,(int)puVar17);
      return 0;
    }
  }
  (**(code **)(*puVar17 + 0x10))(puVar17);
  return 0xff;
}

