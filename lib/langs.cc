#include <jni.h>
#include <string.h>
#include <tree_sitter/api.h>

#include "com_itsaky_androidide_treesitter_TSLanguages_Native.h"

#ifdef TS_LANGUAGE_AGDA
extern "C" TSLanguage* tree_sitter_agda();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_agda(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_agda();
}
#endif

#ifdef TS_LANGUAGE_BASH
extern "C" TSLanguage* tree_sitter_bash();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_bash(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_bash();
}
#endif

#ifdef TS_LANGUAGE_C
extern "C" TSLanguage* tree_sitter_c();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_c(JNIEnv* env,
                                                                jclass self) {
  return (jlong)tree_sitter_c();
}
#endif

#ifdef TS_LANGUAGE_C_SHARP
extern "C" TSLanguage* tree_sitter_c_sharp();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_cSharp(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_c_sharp();
}
#endif

#ifdef TS_LANGUAGE_CPP
extern "C" TSLanguage* tree_sitter_cpp();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_cpp(JNIEnv* env,
                                                                  jclass self) {
  return (jlong)tree_sitter_cpp();
}
#endif

#ifdef TS_LANGUAGE_CSS
extern "C" TSLanguage* tree_sitter_css();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_css(JNIEnv* env,
                                                                  jclass self) {
  return (jlong)tree_sitter_css();
}
#endif

#ifdef TS_LANGUAGE_DART
extern "C" TSLanguage* tree_sitter_dart();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_dart(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_dart();
}
#endif

#ifdef TS_LANGUAGE_ELM
extern "C" TSLanguage* tree_sitter_elm();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_elm(JNIEnv* env,
                                                                  jclass self) {
  return (jlong)tree_sitter_elm();
}
#endif

#ifdef TS_LANGUAGE_EMBEDDED_TEMPLATE
extern "C" TSLanguage* tree_sitter_embedded_template();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_embeddedTemplate(
    JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_embedded_template();
}
#endif

#ifdef TS_LANGUAGE_ENO
extern "C" TSLanguage* tree_sitter_eno();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_eno(JNIEnv* env,
                                                                  jclass self) {
  return (jlong)tree_sitter_eno();
}
#endif

#ifdef TS_LANGUAGE_GO
extern "C" TSLanguage* tree_sitter_go();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_go(JNIEnv* env,
                                                                 jclass self) {
  return (jlong)tree_sitter_go();
}
#endif

#ifdef TS_LANGUAGE_HASKELL
extern "C" TSLanguage* tree_sitter_haskell();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_haskell(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_haskell();
}
#endif

#ifdef TS_LANGUAGE_HTML
extern "C" TSLanguage* tree_sitter_html();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_html(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_html();
}
#endif

#ifdef TS_LANGUAGE_JAVA
extern "C" TSLanguage* tree_sitter_java();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_java(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_java();
}
#endif

#ifdef TS_LANGUAGE_JAVASCRIPT
extern "C" TSLanguage* tree_sitter_javascript();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_javascript(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_javascript();
}
#endif

#ifdef TS_LANGUAGE_JULIA
extern "C" TSLanguage* tree_sitter_julia();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_julia(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_julia();
}
#endif

#ifdef TS_LANGUAGE_KOTLIN
extern "C" TSLanguage* tree_sitter_kotlin();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_kotlin(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_kotlin();
}
#endif

#ifdef TS_LANGUAGE_LUA
extern "C" TSLanguage* tree_sitter_lua();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_lua(JNIEnv* env,
                                                                  jclass self) {
  return (jlong)tree_sitter_lua();
}
#endif

#ifdef TS_LANGUAGE_MARKDOWN
extern "C" TSLanguage* tree_sitter_markdown();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_markdown(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_markdown();
}
#endif

#ifdef TS_LANGUAGE_OCAML
extern "C" TSLanguage* tree_sitter_ocaml();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_ocaml(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_ocaml();
}
#endif

#ifdef TS_LANGUAGE_PHP
extern "C" TSLanguage* tree_sitter_php();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_php(JNIEnv* env,
                                                                  jclass self) {
  return (jlong)tree_sitter_php();
}
#endif

#ifdef TS_LANGUAGE_PYTHON
extern "C" TSLanguage* tree_sitter_python();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_python(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_python();
}
#endif

#ifdef TS_LANGUAGE_RUBY
extern "C" TSLanguage* tree_sitter_ruby();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_ruby(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_ruby();
}
#endif

#ifdef TS_LANGUAGE_RUST
extern "C" TSLanguage* tree_sitter_rust();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_rust(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_rust();
}
#endif

#ifdef TS_LANGUAGE_SCALA
extern "C" TSLanguage* tree_sitter_scala();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_scala(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_scala();
}
#endif

#ifdef TS_LANGUAGE_SCSS
extern "C" TSLanguage* tree_sitter_scss();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_scss(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_scss();
}
#endif

#ifdef TS_LANGUAGE_SWIFT
extern "C" TSLanguage* tree_sitter_swift();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_swift(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_swift();
}
#endif

#ifdef TS_LANGUAGE_TOML
extern "C" TSLanguage* tree_sitter_toml();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_toml(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_toml();
}
#endif

#ifdef TS_LANGUAGE_TSX
extern "C" TSLanguage* tree_sitter_tsx();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_tsx(JNIEnv* env,
                                                                  jclass self) {
  return (jlong)tree_sitter_tsx();
}
#endif

#ifdef TS_LANGUAGE_TYPESCRIPT
extern "C" TSLanguage* tree_sitter_typescript();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_typescript(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_typescript();
}
#endif

#ifdef TS_LANGUAGE_VUE
extern "C" TSLanguage* tree_sitter_vue();
JNIEXPORT jlong JNICALL Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_vue(JNIEnv* env,
                                                                  jclass self) {
  return (jlong)tree_sitter_vue();
}
#endif

#ifdef TS_LANGUAGE_YAML
extern "C" TSLanguage* tree_sitter_yaml();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_yaml(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_yaml();
}
#endif

#ifdef TS_LANGUAGE_WASM
extern "C" TSLanguage* tree_sitter_wasm();
JNIEXPORT jlong JNICALL
Java_com_itsaky_androidide_treesitter_TSLanguages_00024Native_wasm(JNIEnv* env, jclass self) {
  return (jlong)tree_sitter_wasm();
}
#endif
