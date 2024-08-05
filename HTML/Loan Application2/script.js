function showSummary() {
    let fullName = document.getElementById('fullName').value;
    let email = document.getElementById('email').value;
    let phoneNumber = document.getElementById('phoneNumber').value;
    let dob = document.getElementById('dob').value;
    let address = document.getElementById('address').value;
    let loanAmount = document.getElementById('loanAmount').value;
    let loanPurpose = document.getElementById('loanPurpose').value;
    let employmentStatus = document.getElementById('employmentStatus').value;
    let monthlyIncome = document.getElementById('monthlyIncome').value;
    let employmentDetails = document.getElementById('employmentDetails').value;

    let summary = `
        <h4>Summary of Your Inputs</h4>
        <p>Full Name: ${fullName}</p>
        <p>Email: ${email}</p>
        <p>Phone Number: ${phoneNumber}</p>
        <p>Date of Birth: ${dob}</p>
        <p>Address: ${address}</p>
        <p>Loan Amount: ${loanAmount}</p>
        <p>Loan Purpose: ${loanPurpose}</p>
        <p>Employment Status: ${employmentStatus}</p>
        <p>Monthly Income: ${monthlyIncome}</p>
        <p>Employment Details: ${employmentDetails}</p>
    `;

    document.getElementById('summary').innerHTML = summary;
    document.getElementById('summary').style.display = 'block';
}
