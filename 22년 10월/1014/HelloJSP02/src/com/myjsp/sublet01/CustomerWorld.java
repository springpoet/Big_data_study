package com.myjsp.sublet01;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.myjsp.practice01.Customer;

/**
 * Servlet implementation class CustomerWorld
 */
@WebServlet("/CustomerWorld")
public class CustomerWorld extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * Default constructor.
	 */
	public CustomerWorld() {
		// TODO Auto-generated constructor stub
	}

	protected void doGet(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		doAction(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		doAction(request, response);
	}

	protected void doAction(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
//		response.getWriter().append("Served at: ").append(request.getContextPath());
		response.setContentType("text/html;charset=UTF-8");
		request.setCharacterEncoding("UTF-8");

		String name = request.getParameter("name");
		String age = request.getParameter("age");
		String id = request.getParameter("id");
//		age=Integer.parseInt(age)

		Customer c = new Customer(name, Integer.parseInt(age), id);
		response.getWriter().append("<h1>" + c.toString() + "</h1>");
		if (id.equals("admin")) {
			response.sendRedirect("adminjsp.jsp");
			return;
		} else {
			if (Integer.parseInt(age) < 20) {
				RequestDispatcher dispatcher = getServletContext().getRequestDispatcher("/Younger.jsp");
				request.setAttribute("result", c.toString());
				dispatcher.forward(request, response);

//				response.sendRedirect("Younger.jsp");
			} else {
				RequestDispatcher dispatcher = getServletContext().getRequestDispatcher("/Older.jsp");
				request.setAttribute("result", c.toString());
				dispatcher.forward(request, response);
//				Customer c = new Customer(name, Integer.parseInt(age), id);
//				response.getWriter().append("<h1>" + c.toString() + "</h1>");
//				response.sendRedirect("Older.jsp");
			}
		}
	}
}
