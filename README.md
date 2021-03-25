# C++FileHandler<a href="https://www.w3schools.com/cpp/" target="_blank"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="50" height="50"/> </a>
<details>
<summary>
Know More About File Handling
  <hr></hr>
</summary>
<div><img src="https://github.com/OPTIMUS-PRIME2001/C-FileHandler/blob/fe8a4827384839dbc4c4097903fac90eb37b72b0/PNG/File%20input%20Output.png"  align="right">
<p align="left">
<h3>📂What is file?</h3>
<i>Ans: A file itself is a bunch of bytes stored on some storage device. Most Computer Programs work with files to store information permanently</i>
<h3> 🌊What is Stream?</h3>
<i>Ans: A Stream is a Sequence of bytes (binary datas) flowing in the lowest level</i>
<ul><li>The Stream that supplies data to the program from the file is known as <i><b>Input Stream</i></b></li>
  <li>The Stream that receives data from the program is known as <i><b>Output Stream</i></b></li></ul>
  <b>To access datas of files through C++ we must include header file [!FSTREAM.H]
</p>
</div>
<hr></hr>
<h2 align=c"center">Functions of Class Fstream</h2>
<table>
  <tr>
    <th>Class</th><th>Functions</th>
  </tr>
  <tr>
    <td>filebuf</td><td>It sets the file buffers to read and write. It contains clse() and open() member functions in it</td>
  </tr>
  <tr>
    <td>fstreambase</td><td>This is the base class for fstream, ifstream and ofstream classes. Therefore, it provides operations common to these file streams.It also contains open() and close() functions.</td>
  </tr>
  <tr>
    <td>ifstream</td><td>Being an input file stream class, it provides input operations for file. It inherits the functions get(), getline(), read() and functions supporting random access (seekg() and tellg()) from istream class defined inside iostream.h file.</td>
  </tr>
  <tr>
    <td>ofstream</td><td>Being an output file stream class, it provides output operations. It inherits put() and write() functions along with functions supporting random access (seekp()and tellp()) from ostream class defined inside iostream.h file</td>
  </tr>
  <tr>
    <td>fstream</td><td>It is an input-output file stream class. It provides suppoert for simultaneous input and output operations. It inherits all the functions from istream and ostream classes through iostream class defined inside iostream.h file.</td>
  </tr>
</table>  
</details>
