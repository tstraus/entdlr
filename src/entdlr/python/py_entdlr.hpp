#pragma once

#include "pybind11/pybind11.h"

std::string parse_file(const std::string& fbs_file, const std::string& fbs_include_dir = "");

std::string parse_dir(const std::string& fbs_dir, const std::string& fbs_include_dir = "");

std::string apply_template(const std::string& context_str,
                           const std::string& template_str,
                           const std::string& script_str = "",
                           const std::string& config_str = "");

std::string apply_template_file(const std::string& context_str,
                                const std::string& template_file,
                                const std::string& script_file = "",
                                const std::string& config_file = "");

std::string parse_and_apply(const std::string& fbs_file,
                            const std::string& template_file,
                            const std::string& script_file = "",
                            const std::string& config_file = "");

PYBIND11_MODULE(py_entdlr, m)
{
    m.doc() = "Entdlr wrapper for Python";

    m.def("parse_file",
          &parse_file,
          "Parse fbs file and return a string of json representing the Context.",
          pybind11::arg("fbs_file"),
          pybind11::arg("fbs_include_dir") = "");

    m.def("parse_dir",
          &parse_dir,
          "Parse all fbs files in a dir and return a string of json representing the combined Context.",
          pybind11::arg("fbs_dir"),
          pybind11::arg("fbs_include_dir") = "");

    m.def("apply_template",
          &apply_template,
          "Apply the template content to the given context, returns resulting string",
          pybind11::arg("context_str"),
          pybind11::arg("template_str"),
          pybind11::arg("script_str") = "",
          pybind11::arg("config_str") = "");

    m.def("apply_template_file",
          &apply_template_file,
          "Apply the template file to the given context, returns resulting string",
          pybind11::arg("context_str"),
          pybind11::arg("template_file"),
          pybind11::arg("script_file") = "",
          pybind11::arg("config_file") = "");

    m.def("parse_and_apply",
          &parse_and_apply,
          "Loads given files into entdlr, and returns the result of the template.",
          pybind11::arg("fbs_file"),
          pybind11::arg("template_file"),
          pybind11::arg("script_file") = "",
          pybind11::arg("config_file") = "");
}
