/* USA 0030C144 (EU 0030C120): event-script camera / actor commands. Converted stage-2 text
 * (build/decomp/ghidra_fallback/ghidra_analyzed5_v4) with one fix in command 0x11 (camera shot
 * on an actor): the ARM builds the shot position at sp (EU 0030C230..0030C288): the current camera
 * target ((*cam_mgr)+0x18 -> +0x1BC..+0x1C4, `ldm r2, {r1, r2}` + `ldr r0, [r0, #0x1c4]` / `stm sp`);
 * if the command's actor (0030C4D0, saved at +0x80) exists: actor +0x3D0..+0x3D8 with x += +0x74,
 * z += +0x78; then 0030A200(this, sp, ...). Ghidra dropped the stores, so the position was
 * whatever the frame held (zero): the house cutscene camera looked at the room origin instead of
 * Link's bed, and the mesh culling hid most of the room (BOOT_LOG 111 [3d]).
 * CLASS lost Vec3 stack store (ldm/stm). Confidence: high (instruction-level).
 * Second fix (BOOT_LOG 159): command 0x29 (Master Sword event) lost its SafeString stack stores. */
#include "ghidra_types.h"

extern int func_00290294(int param_1,int param_2);
extern int func_002E1B70(int *param_1);
extern int func_0030A200(int param_1,undefined4 *param_2,int param_3,int *param_4);
extern int func_0030C4D0(int *param_1,int param_2);
extern int func_00351BF0(int param_1,int param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_00462C48(int param_1,undefined1 param_2,undefined1 param_3,float fparam_0,float fparam_1, float fparam_2);
extern int func_004EB4A4(int param_1);
extern int func_004EC4FC(int param_1,int param_2,int param_3);
extern int func_004ED18C(int param_1,uint param_2);
extern int func_00540848(int param_1,int *param_2);
extern int *DAT_0030c42c;
extern float DAT_0030c430;
extern int DAT_0030c434;
extern int *DAT_0030c438;
extern undefined4 DAT_0030c43c;
extern undefined4 DAT_0030c440;
extern int *DAT_0030c444;
extern int *DAT_0030c448;
extern int *DAT_0030c44c;

// USA 0030C144 <- EU 0030C120 (Ghidra, non-matching)
// GLOBAL DAT_0030c42c int *
// GLOBAL DAT_0030c430 float
// GLOBAL DAT_0030c434 int
// GLOBAL DAT_0030c438 int *
// GLOBAL DAT_0030c43c undefined4
// GLOBAL DAT_0030c440 undefined4
// GLOBAL DAT_0030c444 int *
// GLOBAL DAT_0030c448 int *
// GLOBAL DAT_0030c44c int *

undefined4 func_0030C144(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20]; /* entry_sp - 0x20 .. entry_sp + 0x0 */
#define stack0xffffffe0 (*(undefined4 *)(albw_frame + 0x0))
  char cVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fparam_2;
  
  pcVar7 = (char *)param_1[0x3c];
  cVar1 = *pcVar7;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  if (cVar1 == '\x03') {
    uVar2 = *(ushort *)(pcVar7 + 10);
    if (uVar2 == 0x17) {
      return func_00351BF0(*(int *)(*DAT_0030c42c + 0x18),*(uint *)(pcVar7 + 4) & 0xff);
    }
    if (uVar2 < 0x18) {
      if (uVar2 != 0xf) {
        if (uVar2 == 0x11) {
          uVar4 = *(uint *)(pcVar7 + 4);
          fVar8 = (float)VectorSignedToFloat((int)(char)(uVar4 >> 8),(byte)(in_fpscr >> 0x15) & 3);
          fVar9 = (float)VectorSignedToFloat((int)(char)(uVar4 >> 0x10),(byte)(in_fpscr >> 0x15) & 3
                                            );
          fVar9 = fVar9 * DAT_0030c430;
          param_1[0x1d] = (int)ALBW_AS_U32((fVar8 * DAT_0030c430));
          param_1[0x1e] = (int)ALBW_AS_U32(fVar9);
          puVar5 = func_0030C4D0(param_1,uVar4 & 0xff);
          param_1[0x20] = (int)puVar5;
          {
            /* EU 0030C230..0030C288: the shot position at sp (lost by the converter) */
            float *albw_pos = (float *)albw_frame;
            int albw_cam = *(int *)(*DAT_0030c42c + 0x18);
            albw_pos[0] = *(float *)(albw_cam + 0x1bc);
            albw_pos[1] = *(float *)(albw_cam + 0x1c0);
            albw_pos[2] = *(float *)(albw_cam + 0x1c4);
            if (param_1[0x20] != 0) {
              int albw_act = param_1[0x20];
              albw_pos[0] = *(float *)(albw_act + 0x3d0) + ALBW_AS_F32(param_1[0x1d]);
              albw_pos[1] = *(float *)(albw_act + 0x3d4);
              albw_pos[2] = *(float *)(albw_act + 0x3d8) + ALBW_AS_F32(param_1[0x1e]);
            }
          }
          return func_0030A200((int)param_1,(undefined4 *)&stack0xffffffe0,
                        (uint)*(byte *)(DAT_0030c434 + (char)(uVar4 >> 0x18)),param_1 + 0xc);
        }
        if (uVar2 == 0x13) {
          iVar6 = func_004ED18C(*DAT_0030c42c,*(uint *)(pcVar7 + 4) & 0xff);
          param_1[0x34] = iVar6;
          return 0;
        }
        if (uVar2 == 0x16) {
          return func_002E1B70(param_1 + 0xc);
        }
      }
    }
    else if (uVar2 == 0x29) {
      func_00290294(*DAT_0030c438,0);
      piVar3 = DAT_0030c444;
      /* EU 30C2EC..30C304: a SafeString at sp {vtable DAT_0030c440, name *DAT_0030c43c}; Ghidra
       * dropped both stores (Master Sword event crashed in 00587FCC hashing a garbage string) */
      *(undefined4 *)(albw_frame + 0x0) = DAT_0030c440;
      *(undefined4 *)(albw_frame + 0x4) = *(undefined4 *)(uintptr_t)DAT_0030c43c;
      iVar6 = func_00540848(*DAT_0030c444,&stack0xffffffe0);
      if (iVar6 != 1) {
        func_004EB4A4(*piVar3);
        switch(*(undefined1 *)(*DAT_0030c448 + 0x18)) {
        default:
          return func_004EC4FC(*piVar3,0xf,1);
        case 1:
        case 3:
        case 5:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
          return func_004EC4FC(*piVar3,0x3c,1);
        }
      }
    }
    else if (uVar2 == 0x2c) {
      if (*DAT_0030c44c != 0) {
        uVar4 = *(uint *)(pcVar7 + 4);
        fparam_2 = (float)VectorUnsignedToFloat((uVar4 << 8) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = (float)VectorUnsignedToFloat((uVar4 << 0x10) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)VectorUnsignedToFloat(uVar4 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
        return func_00462C48(*DAT_0030c44c,0,1,fVar8,fVar9,fparam_2);
      }
    }
    else if (uVar2 == 0x2d) {
      uVar4 = *(uint *)(pcVar7 + 4);
      func_0036720C((int)(param_1 + 0x25),uVar4 & 0xff,(ushort)(byte)(uVar4 >> 8),
                    (uVar4 << 8) >> 0x18,0,3,1);
      *(undefined1 *)(param_1 + 0x33) = 0;
    }
  }
  return 0;
}

