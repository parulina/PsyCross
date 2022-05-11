#ifndef __glad_h_
#define __glad_h_
#include <OpenGL/gl.h>
#include <OpenGL/glext.h>

#define GL_PIXEL_PACK_BUFFER GL_PIXEL_PACK_BUFFER_ARB
#define glBindVertexArray glBindVertexArrayAPPLE
#define glDeleteVertexArrays glDeleteVertexArraysAPPLE
#define glGenVertexArrays glGenVertexArraysAPPLE
#define glIsVertexArray glIsVertexArrayAPPLE

#define GL_FRAMEBUFFER GL_FRAMEBUFFER_EXT
#define GL_COLOR_ATTACHMENT0 GL_COLOR_ATTACHMENT0_EXT
#define GL_DEPTH_ATTACHMENT GL_DEPTH_ATTACHMENT_EXT
#define GL_STENCIL_ATTACHMENT GL_STENCIL_ATTACHMENT_EXT

#define glFramebufferTexture2D glFramebufferTexture2DEXT
#define glGenFramebuffers glGenFramebuffersEXT
#define glDeleteFramebuffers glDeleteFramebuffersEXT
#define glBindFramebuffer glBindFramebufferEXT

#endif
