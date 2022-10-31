package com.javalec.ex;

import java.util.ArrayList;

import javax.servlet.http.HttpServletRequest;

import javax.servlet.http.HttpServletResponse;
public class ServiceInsert implements Service {

	@Override
	public ArrayList<MemberDTO> execute(HttpServletRequest request, HttpServletResponse response) {
		// TODO Auto-generated method stub
		MemberDAO m=MemberDAO.getInstance();
		MemberDTO dto=new MemberDTO();
		dto.setName(request.getParameter("name"));
		dto.setGender(request.getParameter("gender"));
		dto.setId(request.getParameter("id"));
		dto.setPw(request.getParameter("pw"));
		m.memberInsert(dto);
		return null;
	}

}
